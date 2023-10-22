    #include <iostream>
    using namespace std;

    int main()
    {
        int row, colomn, a[100][100], b[100][100], sum[100][100];

        cout << "Enter number of rows between 1 and 100 : ";
        cin >> row;

        cout << "Enter number of columns between 1 and 100 : ";
        cin >> colomn;

        cout << endl << "Enter elements of 1st matrix : " << endl;

        // Storing elements of first matrix entered by user.
        for(int i = 0; i < row; ++i)
        for(int j = 0; j < colomn; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

        // Storing elements of second matrix entered by user.
        cout << endl << "\nEnter elements of 2nd matrix: " << endl;
        for(int i = 0; i < row; ++i)
        for(int j = 0; j < colomn; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

        // Adding Two matrices
        for(int i = 0; i < row; ++i)
            for(int j = 0; j < colomn; ++j)
                sum[i][j] = a[i][j] + b[i][j];

        // Displaying the resultant sum matrix.
        cout << endl << "Sum of two matrix is: " << endl;
        for(int i = 0; i < row; ++i)
            for(int j = 0; j < colomn; ++j)
            {
                cout << sum[i][j] << "  ";
                if(j == colomn - 1)
                    cout << endl;
            }

        return 0;
    }