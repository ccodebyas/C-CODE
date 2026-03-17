#include <stdio.h>

int main() {
	    FILE *f;
	        f = fopen("data.txt", "w");
	            fprintf(f, "Name: AS\n");
	                fprintf(f, "Age: 17\n");
	                    fclose(f);
	                        printf("Data saved!");
	                            return 0;
	                            
}
