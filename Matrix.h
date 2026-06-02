
#include <string>
using namespace std;

class Matrix {

	private:
		// Stack Data Members
		int rowsNum;
		int colsNum;

		// Heap Data Member - Do you need to release it?  Where, when, and how?
		int **matrixData;
	
	public:
		// Default Constructor
		Matrix();		

		// Additional Constructors
		Matrix( int row, int col );
		Matrix( int row, int col, int **table );

		// Remember, this code is incomplete as there are some missing special member functions. You MUST add them!
		// Do you think you need a Destructor?  Why or why not?
		// Rule of Minimum 4 - You need to implement Copy Constructor and Copy Assignment Operator Overload as well
		// Remember, Deep Copy ONLY!!

		// Getters
		int getElement(int i, int j);
		int getsizeofrows();
		int getsizeofcols();

		// Setters
		bool setElement(int x, int i, int j);

		// Other Member Functions
		Matrix copy();						// Create a Copy of This Matrix
		void addTo( Matrix m );				// Add Matrix m to this matrix
		Matrix subMatrix(int i, int j);     // Obtain the upper-left submatrix of this matrix
		string toString();					// String Conversion Method
};
