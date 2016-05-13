#include "../../sdk/dexsdk.h"
#include "../../sdk/time.h"
#include <string.h>

int main()
{
 	char name[30];
 	int i, n;
 	
 	printf("Enter a word to be tested: ");
	gets(name);
			
	n = strlen(name);


	for (i = 0; i < n/2; i++){
		if (name[i] != name[n-1-i]){
			printf("%s is not a palindrome.\n", name);
			break;

		}
	}

	if (i == n/2){
		printf("%s is a palindrome.\n", name);
	}
 		
	return 0;
}



