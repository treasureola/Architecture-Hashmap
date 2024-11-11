#include <stdio.h>
#include <stdlib.h>
#include "hashmap.h"

int main(void){
        int num_buckets = 20;
struct hashmap* hm = hm_create(num_buckets);
char alpha[1023 + 1];

printf(" \nWords in D1.txt: \n");
FILE * stream = fopen("D1.txt", "r");
while(fscanf(stream, "%1023s", alpha) != EOF){
        hm_put(hm, alpha, "D1.txt", 1);
        int c = hm_get(hm, alpha, "D1.txt");
        printf("%s %d \n", alpha, c);
}

printf(" \nWords in D2.txt: \n");
FILE * stream2 = fopen("D2.txt", "r");
while(fscanf(stream2, "%1023s", alpha) != EOF){
        hm_put(hm, alpha, "D2.txt", 1);
        int c = hm_get(hm, alpha, "D2.txt");
        printf("%s %d \n", alpha, c);
}

printf(" \nWords in D3.txt: \n");
FILE * stream3 = fopen("D3.txt", "r");
while(fscanf(stream3, "%1023s", alpha) != EOF){
        hm_put(hm, alpha, "D3.txt", 1);
        int c = hm_get(hm, alpha, "D3.txt");
         printf("%s %d\n", alpha, c);
}

printf(" \n");

    fclose(stream);
    fclose(stream2);
    fclose(stream3);
    
printf("Testing the Remove Function\n");

hm_remove(hm, "homework", "D3.txt");
  int c = hm_get(hm, "homework", "D3.txt");
  printf("%s %d\n", "homework",c);

hm_destroy(hm);

       return 0;
}
