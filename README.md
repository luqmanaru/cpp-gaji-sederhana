# cpp-gaji-sederhana
Simulasi penggajian berdasarkan golongan, pendidikan, dan lembur

---

# 💼 Hitung Honor Karyawan Kontrak - C++

Program ini merupakan simulasi perhitungan honor/gaji karyawan kontrak menggunakan bahasa **C++**. Honor dihitung berdasarkan:

- **Golongan Jabatan**
- **Tingkat Pendidikan**
- **Jumlah Jam Kerja (lembur)**

---

## 🧠 Komponen Perhitungan

| Komponen            | Keterangan                                |
|---------------------|-------------------------------------------|
| Honor Tetap         | Rp300.000                                 |
| Tunjangan Jabatan   | 5%, 10%, atau 15% tergantung golongan     |
| Tunjangan Pendidikan| 2.5%, 5%, atau 7.5% dari honor tetap      |
| Lembur              | Rp2.500/jam jika kerja > 8 jam            |

---

## 💻 Cuplikan Kode

```cpp
if (golongan==1){
 honor=300000;
 golongan=honor*0.05;}
...
if (pendidikan==1){
 honor=300000;
 tjpendidik=honor*0.025;}
...
if (jamkerja>=8)
 hlembur=(jamkerja-8)*2500;
```

---

## 📋 Output Contoh
Setelah input, layar akan menampilkan:

```yaml
Salin
Edit
karyawan yang bernama Hanif honor yang diterima :
honor tetap RP : 300000
tunjangan jabatan RP : 15000
tunjangan pendidikan RP : 22500
honor lembur RP : 5000
--------------------------
honor yang diterima RP : 342500
```

Hanif 

Program ini ditulis sebagai latihan penggajian karyawan dengan logika dasar C++.

