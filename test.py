import os
import shutil

def fun1():
    cwd = os.getcwd()
    lab_list = os.listdir(cwd)
    data_path = os.path.join(cwd, 'data')
    os.mkdir(data_path)

    for lab in lab_list:
        lab_path = os.path.join(cwd, lab)
        # print(lab_path)
        if lab.find('Lab') != -1:
            problem_list = os.listdir(lab_path)
            for problem_id in problem_list:
                print(problem_id)
                data_problem_path = os.path.join(data_path, problem_id)
                os.mkdir(data_problem_path)
                data_problem_AC_path = os.path.join(data_problem_path, 'AC_c')
                os.mkdir(data_problem_AC_path)
                data_problem_WA_path = os.path.join(data_problem_path, 'WA_c')
                os.mkdir(data_problem_WA_path)

                problem_path = os.path.join(lab_path, problem_id)
                solution_list = os.listdir(problem_path)
                for solution_id in solution_list:
                    solution_path = os.path.join(problem_path, solution_id)
                    if solution_id.find('buggy') != -1:
                        data_solution_path = os.path.join(data_problem_WA_path, solution_id)
                    elif solution_id.find('correct') != -1:
                        data_solution_path = os.path.join(data_problem_AC_path, solution_id)
                    shutil.copy(solution_path, data_solution_path)

        elif lab.find('py') == -1:
            print('-------------------------------------')
            file_list = os.listdir(lab_path)
            for i in file_list:
                file_path = os.path.join(lab_path, i)
                problem_id = i.split('.')[1]
                # file_type = i.split('.')[0]
                data_problem_path = os.path.join(data_path, problem_id)
                data_test_path = os.path.join(data_problem_path, 'TEST_DATA_TCG1')
                if not os.path.exists(data_test_path):
                    print(problem_id)
                    os.mkdir(data_test_path)
                data_file_path = os.path.join(data_test_path, i)
                shutil.copy(file_path, data_file_path)


def fun2():
    cwd = os.getcwd()
    problem_list = os.listdir(cwd)
    for problem in problem_list:
        if problem.find('py') != -1:
            continue
        print(problem)
        problem_path = os.path.join(cwd, problem)
        tag_path = os.path.join(problem_path, 'Tag_c')
        os.mkdir(tag_path)
        ac_path = os.path.join(problem_path, 'AC_c')
        file_list = os.listdir(ac_path)
        cnt = 1
        for file_name in file_list:
            ac_file = file_name
            wa_file = file_name.replace('correct', 'buggy')
            tag_file = os.path.join(tag_path, str(cnt) + '.txt')
            with open(tag_file, 'w+') as f:
                f.writelines(wa_file + '\n')
                f.writelines(ac_file + '\n')
            cnt += 1
        # break

def fun3():
    cwd = os.getcwd()
    problem_list = os.listdir(cwd)
    for problem in problem_list:
        if problem.find('py') != -1:
            continue
        print(problem)
        problem_path = os.path.join(cwd, problem)
        test_path = os.path.join(problem_path, 'TEST_DATA_TCG1')
        test_list = os.listdir(test_path)
        for i in test_list:
            case_path = os.path.join(test_path, i)
            new_case_path = case_path.replace('.txt', '')
            os.rename(case_path, new_case_path)

def fun4():
    cwd = os.getcwd()
    modify_list = ['2811', '2812', '2813', '2824', '2825', '2827', '2828', '2830', '2831', '2832', '2833', '2864', '2865', '2866', '2867', '2868', '2869', '2870', '2871']
    problem_list = os.listdir(cwd)
    for problem in problem_list:
        if problem not in modify_list:
            continue
        print(problem)
        problem_path = os.path.join(cwd, problem)
        wa_path = os.path.join(problem_path, 'WA_c')
        wa_list = os.listdir(wa_path)
        for i in wa_list:
            file_path = os.path.join(wa_path, i)
            new_lines = []
            with open(file_path, 'r+') as f:
                lines = f.readlines()
                # print(file_path)
                st = 0
                ed = 0
                for i, line in enumerate(lines):
                    if line.find('/*') >= 0:
                        st = i
                    if line.find('*/') >= 0:
                        ed = i
                        break
                print(st, ed)

                for i, line in enumerate(lines):
                    if i < st or i > ed:
                        new_lines.append(line)
                # print(new_lines)
            with open(file_path, 'w+') as f:
                f.writelines(new_lines)
            # break
        # break

if __name__ == "__main__":
    fun4()