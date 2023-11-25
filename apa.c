#include <stdio.h> // libary yang digunakan

void ganti_karakter(char *data, char find, char replace);//fungsi untuk melakukan penggatian karakter

int main() {
    char data[100], find, replace;

    printf("Masukkan sebuah string: ");
    scanf("%s", data);

    printf("Karakter yang dicari: ");
    scanf(" %c", &find);

    printf("Karakter pengganti: ");
    scanf(" %c", &replace);

    ganti_karakter(data, find, replace);

    printf("String hasil substitusi: %s ", data);//fungsi di panggil dengan paramaeter sesuai

    return 0;
}

void ganti_karakter(char *data, char find, char replace) {
    int i = 0;
    while (data[i] != '\0') {
        if (data[i] == find) {
            data[i] = replace;
        }
        i++;
    }//setiap string pada penggulangan karakter menggunakan perulangan while 
}

