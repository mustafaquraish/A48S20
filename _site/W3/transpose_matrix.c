#include <stdio.h>

void print_matrix(int matrix[4][4]) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%3d ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int matrix[4][4] = {
    {1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9, 10, 11, 12}, 
    {13, 14, 15, 16}
  };

  print_matrix(matrix);
                    
}