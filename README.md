# StrukConsumer-C

## Overview
StrukConsumer-C is a simple C program that simulates a rental service for PlayStation consoles and related equipment. The program allows users to input their personal information, select rental packages, and then outputs a summary of their details and total cost.

## Features
- **User Input**: Collects user data such as name, address, postal code, province, and phone number.
- **Rental Packages**: Offers multiple rental options for PlayStation equipment.
- **Cost Calculation**: Calculates the total rental cost based on the selected packages.
- **Summary Output**: Displays a summary of user details and the total cost of selected rental packages.

## Getting Started

### Prerequisites
To run this program, you need a C compiler such as `gcc`.

### Installation
1. Clone this repository:
   ```sh
   git clone https://github.com/violawa/StrukConsumer-C
   ```
2. Navigate to the project directory:
   ```sh
   cd StrukConsumer-C
   ```

### Compilation
Compile the program using a C compiler:
```sh
gcc -o StrukConsumer main.c
```

### Execution
Run the compiled program:
```sh
./StrukConsumer
```

## Usage
1. **Run the Program**: Upon running the program, you'll be prompted to enter your personal information.
2. **Enter Personal Information**: Input your full name, address, postal code, province, and phone number when prompted.
3. **Select Rental Packages**: Choose from the available rental packages by entering `1` to select or `0` to skip each package.
4. **View Summary**: After making your selections, the program will display a summary of your details and the total rental cost.

### Example
```
Welcome to Rental PS Wildan
--------------------
Masukkan nama lengkap Anda : John Doe
Masukkan alamat Anda       : 1234 Elm Street
Masukkan kode pos Anda     : 56789
Masukkan provinsi Anda     : Jawa Barat
Masukkan nomor telepon Anda: 08123456789

Hello John Doe,

List paket rental yang tersedia [1 untuk ambil / 0 untuk tidak]:
TV & Play Station 3 per-12 Jam (Rp. 100.000) : 1
Play Station per-12 jam (Rp. 70.000)         : 0
TV per-12 jam (Rp. 70.000)                   : 1
Stick Play Station per-jam (Rp. 5.000)       : 1

Details Pendaftar:
--------------------
Nama Lengkap : John Doe
Alamat       : 1234 Elm Street
Kode Pos     : 56789
Provinsi     : Jawa Barat
Nomor Telepon: 08123456789

Paket Rental yang diambil:
1. TV dan Play Station
3. TV
4. Stick Play Station

Harga Total: Rp. 175000.00

Terima kasih atas kunjungannya
Eat-Sleep-Game-Repeat!!
```

Happy gaming!
