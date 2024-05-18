#include <stdio.h>
#include <string.h>

int main() {
    // Deklarasi variabel
    char namaLengkap[50];
    char alamat[100];
    char kodePos[10];
    char provinsi[30];
    char nomorTelepon[20];
    int pilihanProgram[5];
    double hargaTotal = 0;

    // Input data pendaftar
    printf("Welcome to Rental PS Wildan\n");
    printf("--------------------\n");
    printf("Masukkan nama lengkap Anda : ");
    fgets(namaLengkap, sizeof(namaLengkap), stdin);
    namaLengkap[strcspn(namaLengkap, "\n")] = '\0'; // Menghilangkan newline di akhir string

    printf("Masukkan alamat Anda       : ");
    fgets(alamat, sizeof(alamat), stdin);
    alamat[strcspn(alamat, "\n")] = '\0'; // Menghilangkan newline di akhir string

    printf("Masukkan kode pos Anda     : ");
    fgets(kodePos, sizeof(kodePos), stdin);
    kodePos[strcspn(kodePos, "\n")] = '\0'; // Menghilangkan newline di akhir string

    printf("Masukkan provinsi Anda     : ");
    fgets(provinsi, sizeof(provinsi), stdin);
    provinsi[strcspn(provinsi, "\n")] = '\0'; // Menghilangkan newline di akhir string

    printf("Masukkan nomor telepon Anda: ");
    fgets(nomorTelepon, sizeof(nomorTelepon), stdin);
    nomorTelepon[strcspn(nomorTelepon, "\n")] = '\0'; // Menghilangkan newline di akhir string

    // Menampilkan salam dengan nama lengkap
    printf("\nHello %s,\n", namaLengkap);

    // Menampilkan list program pembelajaran
    printf("\n\n\n\n\n"); // Spacer
    printf("List paket retal yang tersedia [1 untuk ambil / 0 untuk tidak]:\n");
    printf("TV & Play Station 3 per-12 Jam (Rp. 100.000) : ");
    scanf("%d", &pilihanProgram[0]);
    printf("Play Station per-12 jam (Rp. 70.000)         : ");
    scanf("%d", &pilihanProgram[1]);
    printf("TV per-12 jam (Rp. 70.000)                   : ");
    scanf("%d", &pilihanProgram[2]);
    printf("Stick Play Station per-jam (Rp. 5.000)       : ");
    scanf("%d", &pilihanProgram[3]);

    // Menghitung harga total
    if (pilihanProgram[0] == 1) hargaTotal += 100000;
    if (pilihanProgram[1] == 1) hargaTotal += 70000;
    if (pilihanProgram[2] == 1) hargaTotal += 70000;
    if (pilihanProgram[3] == 1) hargaTotal += 5000;
   
    // Menampilkan details pendaftar dan harga total
    printf("\n\n\n\n\n"); // Spacer
    printf("Details Pendaftar:\n");
    printf("--------------------\n");
    printf("Nama Lengkap : %s\n", namaLengkap);
    printf("Alamat       : %s\n", alamat);
    printf("Kode Pos     : %s\n", kodePos);
    printf("Provinsi     : %s\n", provinsi);
    printf("Nomor Telepon: %s\n", nomorTelepon);

    printf("\n\n\n\n\n"); // Spacer
    printf("Paket Rental yang diambil:\n");
    if (pilihanProgram[0] == 1) printf("1. TV dan Play Station\n");
    if (pilihanProgram[1] == 1) printf("2. Play Station\n");
    if (pilihanProgram[2] == 1) printf("3. TV\n");
    if (pilihanProgram[3] == 1) printf("4. Stick Play Station\n");

    printf("\nHarga Total: Rp. %.2lf\n", hargaTotal);
    printf("\nTerima kasih atas kunjungannya");
    printf("\nEat-Sleep-Game-Repeat!!");
    return 0;
}
