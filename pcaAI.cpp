// Principals Components Analysis (PCA)
#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main(){
    MatrixXd dados(5,3); // matriz 5x3
    dados << 1.0, 2.0, 3.0,
             2.0, 3.0, 4.0,
             3.0, 4.0, 5.0,
             4.0, 5.0, 6.0,
             5.0, 6.0, 7.0;
    
    VectorXd simp = dados.colwise().mean();
    MatrixXd centralizada = dados.colwise() - simp.transpose();

    MatrixXd covariancia = (centralizada.transpose() * centralizada / double(centralizada.rows() - 1));

    SelfAdjointEigenSolver<MatrixXd> eig(covariancia);
    MatrixXd eigenvectors = eig.eigenvectors();
    VectorXd eigenvalues = eig.eigenvalues();

    cout << "Autovalores:\n" << eigenvalues << endl;
    cout << "Autovetores:\n" << eigenvectors << endl;

    MatrixXd projetada = centralizada * eigenvectors;
    cout << "Dados projetados:\n" << projetada << endl;

    return 0;
}