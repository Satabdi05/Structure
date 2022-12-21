#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    int *piData;
    char *pcName;
} Info;
int main()
{
    //pointer to structure
    Info *ptrMyInfo = NULL;
    //Assign memory to the pointer
    ptrMyInfo = malloc(sizeof(Info));
    //check allocated memory
    if((ptrMyInfo) == NULL)
    {
        printf("FAIL TO ALLOCATE MEMORY\n");
        return 0;
    }
   strncpy(ptrMyInfo->pcName,"Aticleworld", (*ptrMyInfo->piData));
    printf("ptrMyInfo.pcName = %s\n",ptrMyInfo->pcName);
    //Free allocated memory
    free(ptrMyInfo->piData);
    free(ptrMyInfo->pcName);
    free(ptrMyInfo);
    return 0;
}
