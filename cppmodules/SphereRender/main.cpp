// #include "util.h"
#include <iostream>
#include <eigen3/Eigen/Dense>

using Eigen::MatrixXd;
using Eigen::VectorXd;

int main()
{
  // auto val = helper1();
  // std::cout << "Hello world" << std::endl;
  // std::cout << "val " << val << std::endl;
  MatrixXd m = MatrixXd::Random(3,3);
  std::cout << "m =" << std::endl << m << std::endl;
  VectorXd v(3);
  v << 1, 2, 3;
  std::cout << "m*v = " << std::endl << m*v << std::endl;
}