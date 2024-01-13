#include<vector>
#include<algorithm>
using namespace std;

/**
 * @brief Calculates the sum of elements in a submatrix of a given matrix.
 * 
 * @param v The input matrix.
 * @param sr The starting row index of the submatrix.
 * @param sc The starting column index of the submatrix.
 * @param er The ending row index of the submatrix.
 * @param ec The ending column index of the submatrix.
 * @return The sum of elements in the specified submatrix.
 */
int sum(vector<vector<int>> v, int sr, int sc, int er, int ec)
{
    int m=v.size();
    int n=v[0].size();
    
    int M=m;
    int N=n;
    
    vector<vector<int>> aux = v;
    vector<vector<int>> mat = v;
    
    int tli=sr, tlj=sc, rbi=er, rbj=ec;
    
    for (int i=0; i<N; i++)
    {
        aux[0][i] = mat[0][i];
    }
    
    // Do column wise sum
    for (int i=1; i<M; i++)
    {
        for (int j=0; j<N; j++)
        {
            aux[i][j] = mat[i][j] + aux[i-1][j];
        }
    }
     
  
    // Do row wise sum
    for (int i=0; i<M; i++)
    {
        for (int j=1; j<N; j++)
        {
            aux[i][j] += aux[i][j-1];
        }
            
    }
      

    int res = aux[rbi][rbj];
  
    // Remove elements between (0, 0) and (tli-1, rbj)
    if (tli > 0)
       res = res - aux[tli-1][rbj];
  
    // Remove elements between (0, 0) and (rbi, tlj-1)
    if (tlj > 0)
       res = res - aux[rbi][tlj-1];
  
    // Add aux[tli-1][tlj-1] as elements between (0, 0)
    // and (tli-1, tlj-1) are subtracted twice
    if (tli > 0 && tlj > 0)
       res = res + aux[tli-1][tlj-1];
  
    return res;
}


int main()
{
    std::vector<std::vector<int>> input = {{1, 2, 3, 4, 6},
                                            {5, 3, 8, 1, 2},
                                            {4, 6, 7, 5, 5},
                                            {2, 4, 8, 9, 4} };

    int start_row = 2;
    int start_colum = 2;
    int end_row = 3;
    int end_colum = 4;
    
    int result = sum(input, start_row, start_colum, end_row, end_colum);
}