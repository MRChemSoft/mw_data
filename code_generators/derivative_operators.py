def get_line(order, val=1):
    if order == 2:
        return val
    else:
        val = val + (order - 1) * 3 + 1
        order = order - 1
        return get_line(order, val)

def generate_BS_filters(max_order, derivative, method, basis):
    # with open(f'I_b-spline-deriv{derivative}.txt' ,'r') as input_file:
    with open(f'{basis}_ph_deriv_{derivative}.txt' ,'r') as input_file:
        lines = input_file.readlines()
        with open(f'{basis}_{method}_filters_{derivative}.cpp', 'w') as output_file:

            make_headers(max_order, output_file)
            for order in range(2, max_order):
                make_BS_functions(order, output_file, lines, method, basis, derivative)

            output_file.write('} // namespace mrcpp')
            output_file.write('\n')
            output_file.write('\n')



def make_headers(max_order, output_file):
    output_file.write('#include <Eigen/Dense>')
    output_file.write('\n')
    output_file.write('using namespace Eigen;')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write('\n')
    if max_order > 4:
        for order in range(5, max_order):
            output_file.write(f'typedef Matrix<double, {order}, {order}> Matrix{order}d;')
            output_file.write('\n')
    output_file.write('namespace mrcpp {')
    output_file.write('\n')
    output_file.write('\n')

def make_BS_functions(order, output_file, lines, method, basis, derivative):

    start_idx = get_line(order) - 1
    end_matrix_1 = start_idx + order + 1
    end_matrix_2 = end_matrix_1 + order
    end_matrix_3 = end_matrix_2 + order
    matrix_1 = lines[start_idx+1:end_matrix_1]
    matrix_2 = lines[end_matrix_1:end_matrix_2]
    matrix_3 = lines[end_matrix_2:end_matrix_3]
    csv_matrix_1 = csv.reader(matrix_1, delimiter=' ')
    csv_matrix_2 = csv.reader(matrix_2, delimiter=' ')
    csv_matrix_3 = csv.reader(matrix_3, delimiter=' ')



    one_liner_matrix_1 = list(filter(None, [item for sublist in csv_matrix_1 for item in sublist]))
    one_liner_matrix_2 = list(filter(None, [item for sublist in csv_matrix_2 for item in sublist]))
    one_liner_matrix_3 = list(filter(None, [item for sublist in csv_matrix_3 for item in sublist]))

    output_file.write(f'Matrix{order}d {basis}_{order}_{method}_Sm1_order_{derivative} () {{')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write(f'Matrix{order}d Sm1;')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write('Sm1 << ')
    output_file.write(','.join(one_liner_matrix_1))
    output_file.write(';')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write('return Sm1;')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write('}')
    output_file.write('\n')
    output_file.write('\n')

    output_file.write(f'Matrix{order}d {basis}_{order}_{method}_S0_order_{derivative} () {{')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write(f'Matrix{order}d S0;')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write('S0 << ')
    output_file.write(','.join(one_liner_matrix_2))
    output_file.write(';')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write('return S0;')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write('}')
    output_file.write('\n')
    output_file.write('\n')

    output_file.write(f'Matrix{order}d {basis}_{order}_{method}_Sp1_order_{derivative} () {{')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write(f'Matrix{order}d Sp1;')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write('Sp1 << ')
    output_file.write(','.join(one_liner_matrix_3))
    output_file.write(';')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write('return Sp1;')
    output_file.write('\n')
    output_file.write('\n')
    output_file.write('}')
    output_file.write('\n')
    output_file.write('\n')
