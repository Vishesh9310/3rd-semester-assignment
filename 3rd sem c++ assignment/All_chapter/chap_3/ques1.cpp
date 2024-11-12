/*Q1- Create a Matrix class that includes a two-dimensional array as a data member.
Implement member functions to input and display matrix elements.
*/

#include <iostream>
using namespace std;

class Matrix{
    public:
    int m=2, n=2;
    int arr[2][2];

    void input(){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<"Enter value of index: arr["<<i<<"]["<<j<<"] : ";
                cin>>arr[i][j];
            }
        }
    }

    void display(){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Matrix m1;
    m1.input();
    m1.display();
   
    return 0;
}

/*
#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** matrix;

public:
    // Constructor to initialize matrix dimensions and allocate memory
    Matrix(int r, int c) : rows(r), cols(c) {
        // Dynamically allocate memory for 2D array
        matrix = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            matrix[i] = new int[cols];
        }
    }

    // Destructor to release dynamically allocated memory
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    // Member function to input matrix elements
    void inputMatrix() {
        cout << "Enter the elements of the " << rows << "x" << cols << " matrix:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << "Element at (" << i+1 << "," << j+1 << "): ";
                cin >> matrix[i][j];
            }
        }
    }

    // Member function to display matrix elements
    void displayMatrix() const {
        cout << "The matrix is:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;

    // Input matrix dimensions
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Create a Matrix object
    Matrix mat(rows, cols);

    // Input and display the matrix
    mat.inputMatrix();
    mat.displayMatrix();

    return 0;
}
*/