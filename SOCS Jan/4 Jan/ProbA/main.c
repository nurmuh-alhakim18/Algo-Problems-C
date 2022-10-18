#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tanduran{
    int nomer_tanduran;
    char jeneng_awal[100];
};

int main(){
    FILE *fptr;
    fptr = fopen("testdata.in","r");
    if(fptr == NULL){
        fprintf(stderr, "Akses File Gagal");
        return 1;
    }
    int tc;
    fscanf(fptr, "%d", &tc);
    struct tanduran kembang[tc];
    for(int a = 0; a<tc; a++){
        fscanf(fptr, "%d#%[^\n]", &kembang[a].nomer_tanduran, &kembang[a].jeneng_awal);
    }
    struct tanduran pari;
    for(int a = 0; a<tc; a++){
        for(int y = a+1; y<tc; y++){
            if(strcmp(kembang[a].jeneng_awal, kembang[y].jeneng_awal)>0){
                pari=kembang[a];
                kembang[a]=kembang[y];
                kembang[y]=pari;
            }
        }
    }
    for(int a = 0; a<tc; a++){
        printf("%d %s\n", kembang[a].nomer_tanduran, kembang[a].jeneng_awal);
    }
    fclose(fptr);
return 0;
}

