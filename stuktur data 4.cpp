#include <iostream>
#include <string>
using namespace std;
 
 
int main()
{
    int A[] = { 7, 4, 3, 1};
    int B[] = { 6, 5, 2, 8 };
    int temp;
	
    
    int size_a = sizeof(A) / sizeof(*A);
    int size_b = sizeof(B) / sizeof(*B);
    int total_size = size_a + size_b;
    int index_lanjut = size_a;
    
    int C[total_size] = {0};
    
    printf("Array A : ");    
    for (int i = 0; i < size_a; i++){
    	printf("%i ", A[i]);
	}
	printf("\n");
	
	printf("Array B : ");    
    for (int i = 0; i < size_b; i++){
    	printf("%i ", B[i]);
	}
	printf("\n");
	
	// Perulangan Array A ke Array C
    for(int i=0; i<size_a; i++)
    {
        C[i] = A[i];
    }
    
    // Perulangan Array B ke Array C
	for(int j=0; j<size_b; j++)
    {
        C[index_lanjut] = B[j];
        index_lanjut++;
    }
    
    printf("Array C Yang Belum Diurutkan : ");   
    for (int k = 0; k < total_size; k++){
    	printf("%i ", C[k]);
	}
	printf("\n");
	
	// Perulangan Mengurutkan Array D menjadi ASCENDING
	for(int i=0;i<total_size;i++)
	{		
		for(int j=i+1;j<total_size;j++)
		{
			if(C[i]>C[j])
			{
				temp  = C[i];
				C[i]  = C[j];
				C[j]  = temp;
			}
		}
	}
	
	printf("Array D ASCENDING : ");   
    for (int k = 0; k < total_size; k++){
    	printf("%i ", C[k]);
	}
	printf("\n");
	
	printf("Array C DESCENDING : ");   
    for (int k = total_size - 1; k >= 0; k--){
    	printf("%i ", C[k]);
	}
	printf("\n");
    return 0;
}
