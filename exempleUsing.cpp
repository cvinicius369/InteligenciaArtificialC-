// este codigo é um exemplo de uso da biblioteca eigen
// para instala-la baixe no site oficial
// em seguida coloque em um diretorio de sua preferencia
// vá ate o arquivo c_cpp_properties.json contido no diretorio .vscode do seu projeto
// em includePath ADICIONE mais um valor que é o caminho exato paro o diretorio eigen
/* exemplo: {
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**",
                "C:/Libraries/eigen-3.4.0"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "windowsSdkVersion": "10.0.19041.0",
            "compilerPath": "cl.exe",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": "windows-msvc-x64"
        }
    ],
    "version": 4
}

agora salve e use conforme o codigo abaixo exemplifica
*/

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(){
    Matrix <float, 3,3> matrixA;
    matrixA.setZero();
    cout<<"matrixA"<<endl;
    return 0;
}
