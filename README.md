*This project has been created as part of the 42 curriculum by aberdal.*

# Libft

## Açıklama (Description)
Libft, C standart kütüphanesinde bulunan bazı fonksiyonların yeniden yazılmasını ve
ek yardımcı fonksiyonların geliştirilmesini amaçlayan bir statik kütüphanedir.
Bu proje ile standart C fonksiyonlarının iç mantığını anlamak, bellek yönetimi
konusunda pratik yapmak ve ilerideki 42 projelerinde kullanılabilecek sağlam
bir temel kütüphane oluşturmak hedeflenmiştir.

Kütüphane; string işlemleri, bellek işlemleri ve tek yönlü bağlı liste (linked list)
fonksiyonlarından oluşur.

## Talimatlar (Instructions)
Bu proje bir **statik C kütüphanesidir** ve doğrudan çalıştırılabilir bir program
içermez. Kütüphane, ilerleyen 42 projelerinde kullanılmak üzere derlenir.

Kütüphaneyi derlemek için aşağıdaki komut kullanılır:

make

Bu işlem sonucunda proje kök dizininde `libft.a` dosyası oluşturulur.

### Derleme
Kütüphaneyi derlemek için:

-make

Bu komut çalıştırıldığında, proje kök dizininde `libft.a` dosyası oluşturulur.

### Makefile Kuralları
- make / make all : kütüphaneyi derler
- make clean      : obje dosyalarını siler
- make fclean     : obje dosyalarını ve `libft.a` dosyasını siler
- make re         : projeyi temizleyip yeniden derler

### Kullanım
libft, diğer C projelerinde statik kütüphane olarak kullanılmak üzere
tasarlanmıştır. Kullanım detayları proje gereksinimlerine göre değişir.

## Kütüphane Açıklaması (Library Description)

Libft, C dilinde yazılmış bir statik kütüphanedir ve üç ana bölümden oluşur:
standart libc fonksiyonlarının yeniden yazımı, ek yardımcı fonksiyonlar ve
tek yönlü bağlı liste (linked list) işlemleri.

Kütüphanede yer alan tüm fonksiyonlar, bellek yönetimi kurallarına uygun
şekilde yazılmıştır ve `-Wall -Wextra -Werror` derleme bayrakları ile
uyumlu çalışır.

Libft’in amacı, standart C fonksiyonlarının iç işleyişini öğrenmek ve
ilerleyen projelerde tekrar kullanılabilecek güvenilir bir yardımcı
kütüphane sağlamaktır. Fonksiyonlar modüler yapıda tasarlanmış olup,
genel C projelerinde bağımsız olarak kullanılabilir.

### Bölüm 1 – Libc Fonksiyonları
Bu bölümde, standart C kütüphanesinde bulunan fonksiyonlar `ft_` öneki ile
yeniden uygulanmıştır. Karakter kontrolü, string işlemleri, bellek işlemleri
ve dönüştürme fonksiyonları bu bölümde yer alır. Tüm fonksiyonlar man
sayfalarına uygun şekilde yazılmıştır.

### Bölüm 2 – Ek Fonksiyonlar
Libc’te bulunmayan veya farklı şekilde sunulan yardımcı fonksiyonlardan oluşur.
String parçalama, string birleştirme, string kırpma, sayı–string dönüşümü ve
dosya tanımlayıcıya yazma fonksiyonları bu bölümde yer almaktadır.

### Bölüm 3 – Linked List Fonksiyonları
Bu bölümde tek yönlü bağlı liste yapısı (`t_list`) kullanılarak liste
oluşturma, eleman ekleme, liste uzunluğu alma, silme, temizleme ve liste
üzerinde gezinme işlemleri gerçekleştirilmiştir.

## Kaynaklar (Resources)
- Linux man sayfaları (man malloc, man memcpy, vb.)
- 42 Libft subject PDF
- The C Programming Language – Kernighan & Ritchie

### AI Kullanımı
Yapay zekâ araçları; proje gereksinimlerini ve fonksiyonların genel davranışlarını
daha iyi anlamak, README dosyasının hazırlanmasında destek almak ve
genel yönlendirme amacıyla kullanılmıştır. Kodların tamamı proje sahibi
tarafından yazılmıştır.
