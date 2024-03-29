#include <stdio.h>
#include <ctype.h>

#define vowels (1u << ('a'-'a') | 1u << ('e'-'a') | 1u << ('i'-'a') | 1u << ('o'-'a') | 1u << ('u'-'a'))

unsigned int char_to_set(char c) {
    c = tolower(c);
    if (c < 'a' || c > 'z') {
        return 0;
    }
    else {
	       return 1u << (c-'a');
    }
}

int main() {
    char c;
    int k;
    unsigned int first_set = 0;
    unsigned int second_set = 0;
    k = 1;
    c = getchar();
    while (c != EOF) {
        c = tolower(c);
        if (c >= 'a' && c <= 'z') {
            if (k == 1) {
	        first_set = (first_set | char_to_set(c)) & vowels;
	    }
	    else {
		second_set = (second_set | char_to_set(c)) & vowels;	
	    }
        }
        c = getchar();
        c = tolower(c);
	if (first_set != 0 && k == 1 && (c < 'a' || c > 'z')) {
	    k = 0;
        }
	if (second_set != 0 && k == 0 && (c < 'a' || c > 'z')) {
            first_set = first_set & second_set;
            second_set = 0;
	}
    }
    if (first_set != 0) {
	printf("There are some common vowels\n");
    }
    else {
	printf("There aren't some common vowels\n");
    }	
    return 0;
}
