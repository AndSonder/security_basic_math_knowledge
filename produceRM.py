""" 2021-1-3 coronaPolvo
this py file is used to produce readme file
I need a codes list for my cpp codes. I use this python file to achieve this
"""

import os

basic_readme_file = """
# 信息安全数学基础

- coronaPolvo在学习信息安全数学基础


在学习信息安全数学基础的过程中发现很多的算法都可以使用代码进行实现，而且实现的过程会很加深你对他的理解。这个仓库用来记录下来一些算法的代码实现

"""


def get_code_list():
    """
    get cpp codes list
    :return: code list
    """
    code_list = []
    for item in os.listdir('code'):
        if item[-3:] == 'cpp':
            code_list.append(item)
    code_list.reverse()
    return code_list


def produce_readme_file(code_list):
    """
    add code list to basic readme file
    :return: None
    """
    basic = "- [ ] [{}]({})\n"
    for item in code_list:
        code_name = basic.format(item[:-4], './code/' + item)
        global basic_readme_file
        basic_readme_file += code_name


def run():
    code_list = get_code_list()
    produce_readme_file(code_list)
    with open('README.md', 'w') as f:
        f.write(basic_readme_file)

run()
