#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

typedef  vector <vector<string>> matrix;    //definicja nowego typu - macierzy

/********************klasa z macierza wejsciowa - nadrzędna **********************/
class BenchmarkMatrix
{
private:
    matrix matrixIn;
    int matrixSize;
protected:
    matrix matrixCurrent, matrixPom;
    vector <int> permutationColumns, permutationRows;
    int jakosc;

public:
    //BenchmarkMatrix(){};

    BenchmarkMatrix(int matrixNumber)
    {
        switch (matrixNumber){
        case 1:
            string matrixPom [4][4] = {{"a1", "a2", "a3", "a4"},{"b1", "b2", "b3", "b4"},{"11", "12", "13", "14"},{"21", "22", "23", "24"}}; //macierz testowa 1
            std::vector <string> vectorPom;
            matrixSize = 4;
            for (int i=0;i<matrixSize;++i){
                for (int j=0;j<matrixSize;++j){
                    vectorPom.push_back(matrixPom[i][j]);
                }
                matrixIn.push_back(vectorPom);
                vectorPom.clear();
                permutationColumns.push_back(i);
                permutationRows.push_back(i);
            }
        }
    }
    BenchmarkMatrix(int matrixNumber, vector <int> permutationColumns, vector <int> permutationRows)
    {
        switch (matrixNumber){
        case 1:
            string matrixPom [4][4] = {{"a1", "a2", "a3", "a4"},{"b1", "b2", "b3", "b4"},{"11", "12", "13", "14"},{"21", "22", "23", "24"}}; //macierz testowa 1
            std::vector <string> vectorPom;
            matrixSize = 4;
            for (int i=0;i<matrixSize;++i){
                for (int j=0;j<matrixSize;++j){
                    vectorPom.push_back(matrixPom[i][j]);
                }
                matrixIn.push_back(vectorPom);
                vectorPom.clear();
            }
        }
        this->permutationColumns = permutationColumns;
        this->permutationRows = permutationRows;

    }

    int sizeOfMatrix()  //zwróć rozmiar macierzy
    {
        return matrixSize;
    };

    string elements(int row, int column)    //zwróć dany element macierzy
    {
        return matrixIn[row][column];
    };

    int permutation()
    {
        int permutRow1, permutRow2, permutCol1, permutCol2;
        matrixCurrent = matrixIn;
        matrixPom = matrixIn;
        for (int i=0; i<matrixSize; ++i)
        {
            for (int j=0; j<matrixSize; ++j)
            {
                permutCol1 = abs()
                swap(matrixCurrent[permutationRows[i]],matrixPom[permutationColumns[j]]);
            };

        };
        return 1;
    };
};


/***********   klasa macierzy roboczych     *****************************/
class MatrixClass : public BenchmarkMatrix
{
    unsigned int permutationColumnsUnsigned, permutationRowsUnsigned;
    int signRows, signColumns;
public:
    MatrixClass(int matrixNumber, vector <int> permutationColumns, vector <int> permutationRows):BenchmarkMatrix(matrixNumber, permutationRows, permutationColumns)
    {

    };

};




int main(){
    BenchmarkMatrix matrixTest = BenchmarkMatrix(1);
    for (int i=0;i<4;++i){
        for (int j=0;j<4;++j){
            std::cout << matrixTest.elements(i,j) << "  ";
        }
        std::cout << std::endl;

    }


    return 1;
}
