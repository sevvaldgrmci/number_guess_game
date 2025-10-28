# 5 Basamaklı Sayı Tahmin Oyunu (C)

Kullanıcının 5 basamaklı bir sayıyı tahmin etmesini sağlayan C programı.  
Program, tahmin edilen sayıdaki rakamların doğru konumunu ve doğru ama yanlış konumda olan rakamları işaretler.

## Özellikler
- 5 basamaklı sabit bir sayıyı tahmin etme oyunu.
- Kullanıcıya geri bildirim verir:
  - `o` → doğru rakam ve doğru konum
  - `+` → doğru rakam ama yanlış konum
  - `x` → yanlış rakam
- Oyuncu sayıyı doğru tahmin edene kadar devam eder.

## Gereksinimler
- GCC veya başka bir C derleyicisi
- `stdint.h` kütüphanesi hakkında temel bilgi

## Kullanım
- Program sabit `{4, 7, 3, 2, 1}` sayısını tahmin etmenizi ister.
- Tahmininizin doğruluğunu `o`, `+`, `x` sembolleri ile gösterir.
- Doğru tahmin edildiğinde oyunu kazanırsınız.

## Geliştirici
- Şevval Değirmenci
