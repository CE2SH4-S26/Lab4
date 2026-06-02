
#include "Matrix.h"
#include <iostream>
#include <stdexcept>
#include <stdlib.h>
using namespace std;

Matrix::Matrix()
{
	// Default Constructor

	// This is a sample constructor with the default matrix size set to 3x3
	// 
	// Two key concepts here:
	//  1. In C++, use the keyword new for heap memory allocation calls
	//  2. When a C++ class has heap data members, allocate heap memory for them in the constructor
	//     THEREFORE, you may need to add a destructor to deallocate the memory.
	//     (You need to add it yourself!!)
	rowsNum = 3;
	colsNum = 3;
	matrixData = new int*[rowsNum];

	for(int i = 0; i < rowsNum; i++)
	{
		matrixData[i] = new int[colsNum];
	}

	for(int i = 0; i < rowsNum; i++)
	{
		for(int j = 0; j < colsNum; j++)
		{
			matrixData[i][j] = 0;
		}
	}
}


Matrix::Matrix( int row, int col )
{
	// Additional Constructor
	/*
	* constructs a row-by-col matrix with
	* all elements equal to 0; if row ≤ 0, the number of rows of the matrix is set to
	* 3; likewise, if col ≤ 0 the number of columns of the matrix is set to 3.
	*/

	// IMPLEMENT YOUR CODE BELOW


}


Matrix::Matrix(int row, int col, int** table)
{
	// Additional Constructor
	/*
	* constructs a matrix out of the two dimensional array table, with the same number of rows, columns, and the same
	* element in each position as array table.
	*/
	
	// IMPLEMENT YOUR CODE BELOW


}

// [TODO] : May need something here to deallocate the heap members at the end of the object lifetime.
// [TODO] : Respect the Rule of Six / Minimum Four.  Implement what's missing here.
//		
//		Copy Constructor
//		Copy Assignment Operator
//		Do you need a Destructor?


int Matrix::getElement(int i, int j)
{
	// Getter Method - Get the value of the element located at index [i, j]

	// C++ Error Handling Method 1: Exception
	//////////////////////////////////////////
	// If either i or j is out of the matrix index bound, you should follow the C++ error handling convention
	// by throwing an exception as described below 
	//		throw std::out_of_range("Invalid indexes.");

	// IMPLEMENT YOUR CODE BELOW



}


int Matrix::getsizeofrows(){

	// Getter - Return the row size of this matrix

	// IMPLEMENT YOUR CODE BELOW


}


int Matrix::getsizeofcols(){

	// Getter - Return the column size of this matrix
    
	// IMPLEMENT YOUR CODE BELOW


}


bool Matrix::setElement(int x, int i, int j){

	// Setter Method - Get the value of the element located at index [i, j]

	// C++ Error Handling Method 2: Boolean Status Return
	/////////////////////////////////////////////////////
	// If the return value of a function is not used for data passing, you may deploy an alternative way
	// to handle the index-out-of-bound error.
	// If either i or j is out of the matrix index bound return false
	// Otherwise, set the data at the designated index and return true

	// Design Recommendation: unless communicated with your SW team, you should use Exception by default.

	// IMPLEMENT YOUR CODE BELOW


}


Matrix Matrix::copy(){

	// Member Function - Create a Copy of This Matrix (NOT a copy constructor)

	// The function is intended to:
	// 1. Create an instance of a matrix of the same dimensions as itself
	// 2. Copy all the elements of itself to the new copied instance
	// 3. Return the instance of the Matrix

	// An implementation is provided below. However, the implementation is faulty with two semantic bugs.
	// The code is commented out by default so to not affect your other development tasks.

	// [TODO]: Uncomment the code block below, then debug!
	/* Fix the code using the VSCode IDE Debugger or Debugging Message Printout using cout, and produce a simple debugging report*/

	/* UNCOMMENT THIS SECTION, THEN DEBUG! */
	/* UNCOMMENT THIS SECTION, THEN DEBUG! */
	
	/*
	Matrix copy = Matrix();

	for(int i = 0; i < rowsNum; i++)
	{
		for(int j = 0; j < colsNum; j++)
		{
			copy.setElement(matrixData[j][i], j, i);
		}
	}

    return copy;
	*/

	/* UNCOMMENT THIS SECTION, THEN DEBUG! */
	/* UNCOMMENT THIS SECTION, THEN DEBUG! */
}


void Matrix::addTo( Matrix m ){

	// Member Function - Add Matrix m to This Matrix (current Matrix)
	
	// Error Handling
	// Two matrices must be of the same dimension for addition to be valid.
	// Check dimension matching. If failed, throw the following exception:
	//	throw std::invalid_argument("Invalid operation.");

	// IMPLEMENT YOUR CODE BELOW
 

}


Matrix Matrix::subMatrix(int i, int j){

	// Member Function - Get the Upper-Left Sub-Matrix of This Matrix

	// Description of the functionality:
	//  The function accepts two params:
	//    i - the row-index of the lower-right corner of the sub matrix
	//    j - the col-index of the lower-right corner of the sub matrix
	//  Then, the function will return the submatrix from this matrix as such
	//	  The submatrix has the exact size that can hold all the elements from [0, 0] to [i, j]
	//    and its values are identical to the elements of this matrix from [0, 0] to [i, j]

	//  For example, given the following matrix
	//      1 2 3
	//  m = 4 5 6 
	//      7 8 9
	//  Then, m.subMatrix(1, 1) will return
	//   1 2
	//   4 5

	// Error Handling
	/////////////////////
	// If either i or j is out of the matrix index bound, you should follow the C++ error handling convention
	// by throwing an exception as described below 
	//		throw std::out_of_range("Submatrix not defined.");
	
	// IMPLEMENT YOUR CODE BELOW


}


string Matrix::toString(){

	// Member Function - String Conversion Method
	///////////////////////////////////////////////
	//
	// Most of the C++ classes contain a toString() method to allow their data members
	// to be presented in a string format, so that their contents can be displayed on the console screen
	// or other terminal interfaces for debugging / UI purposes.
	// 
	// This method requires the matrix to be output in the following string format:
	//           1 2 3
	// Given m = 4 5 6 , then the string output should be "1 2 3 \n4 5 6 \n7 8 9 \n"
	//           7 8 9  
	//
	// such that if cout << m.toString(); is executed, the output on the console screen will be:
	// 
	// 1_2_3_  (_ is space character just to illustrate where the whitespaces are expected) 
	// 4_5_6_
	// 7_8_9_
	//
	// You may use the C++ string library for string assembly purpose
	// Look up the C++ string library documentation to learn how to use it for your design purpose.

	// You may further use the to_string() function from the <iostream> library to help with converting
	// non-string data types to their string format. Read necessary documentation before using it!!

	string output;

	// IMPLEMENT YOUR CODE BELOW


	return output;
}