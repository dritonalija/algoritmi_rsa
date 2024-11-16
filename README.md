# **Zhvillimi i programit për enkriptimin e tekstit me algoritimin RSA në C++**


<table>
  <tr>
   <td>
     <img src="assets/uni-logo.png" alt="University Logo" width="200" >
    </td>
    <td>
      <h2>UNIVERSITETI I PRISHTINËS “HASAN PRISHTINA”</h2>
      <p><strong>Fakulteti i Inxhinierisë Elektrike dhe Kompjuterike</p>
      <p><strong>Departamenti: </strong> Inxhinieri Kompjuterike dhe Softuerike</p>
      <p><strong>Kodra e Diellit, p.n. - 10000 Prishtinë, Kosova</string>
    </td>
   
  </tr>
</table>
  

---

## Detajet e lëndës
- **Siguria e informacionit**
- **Prof. Dr. Blerim Rexha**
- **Asst. Dr.Sc. Mërgim Hoti**
- **Niveli:** Master
- **Viti akademik:** 2024/2025

---

## Detajet e projektit
- **Titulli:** Zhvillimi i programit për enkriptimin e tekstit me algoritimin RSA në C++
- **Përshkrimi:** Ky projekt implementon algoritmin RSA(Rivest-Shamir-Adleman) në gjuhën programuese C++. Përdor si hyrje një tekst dhe kthen Çelësin publik, Çelësin privat, Mesazhin e enkriptuar dhe Mesazhin e dekriptuar.

---

## Grupi punues
- **Punuar nga:**  
  - Driton Alija
  - Muhamed Zahiri 
  - Jusuf Maksuti

- **Mentori i projektit:**  
  - **Dr.Sc. Mërgim Hoti**

---

## Përmbajtja

- [**Zhvillimi i programit për enkriptimin e tekstit me algoritimin RSA në C++**](#zhvillimi-i-programit-për-enkriptimin-e-tekstit-me-algoritimin-rsa-në-c)
  - [Detajet e lëndës](#detajet-e-lëndës)
  - [Detajet e projektit](#detajet-e-projektit)
  - [Grupi punues](#grupi-punues)
  - [Përmbajtja](#përmbajtja)
  - [Përshkrimi i Projektit](#përshkrimi-i-projektit)
  - [Karakteristikat](#karakteristikat)
  - [Kërkesat](#kërkesat)
  - [Instalimi](#instalimi)
    - [Ekzekutimi me Docker](#ekzekutimi-me-docker)
    - [Ekzekutimi Lokalisht](#ekzekutimi-lokalisht)
  - [Udhëzime për përdorim](#udhëzime-për-përdorim)
  - [Shembull i Daljes](#shembull-i-daljes)

---

## Përshkrimi i Projektit
Projekti përfshin implementimin e një sistemi enkriptimi dhe dekriptimi bazuar në algoritmin RSA (Rivest-Shamir-Adleman). Algoritmi përdor çelësa publik dhe privat për të garantuar sigurinë e mesazheve. Ky sistem është ndërtuar në gjuhën programuese C++ dhe mbështet gjenerimin e çelësave, enkriptimin dhe dekriptimin.  

Kodi mund të ekzekutohet në mënyrë të izoluar përmes Docker për lehtësinë e ekzekutitmit.  


---

## Karakteristikat
- Gjenerimi i çelësave publik dhe privat.  
- Enkriptimi i mesazheve me çelësin publik.  
- Dekriptimi i mesazheve me çelësin privat.  
- Përdorimi i funksioneve matematikore:  
  - GCD (Përpjesëtuesi më i madh i përbashkët)  
  - Invers modular  
  - Fuqizimi modular  

---

## Kërkesat
- **C++** për ndërtimin dhe ekzekutimin e kodit.  
- **Docker** për krijimin e një mjedisi të izoluar për ekzekutim.  

---

## Instalimi

### Ekzekutimi me Docker

1. Sigurohuni që **Docker** është instaluar në sistemin tuaj.

2. Ndërtoni imazhin Docker:
    ```bash
    docker build -t rsa-encryption .
    ```

3. Ekzekutoni kontejnerin Docker:
    ```bash
    docker run -it rsa-encryption
    ```

### Ekzekutimi Lokalisht

1. Instaloni një kompajler C++ (p.sh., **g++**).
2. Përpiloni kodin:
    ```bash
    g++ -o rsa main.cpp
    ```
3. Ekzekutoni aplikacionin:
    ```bash
    ./rsa
    ```

---

## Udhëzime për përdorim

1. Gjatë ekzekutimit, aplikacioni do të gjenerojë çelësat publik dhe privat.
2. Vendosni mesazhin që dëshironi të enkriptoni kur ju kërkohet.
3. Aplikacioni do të shfaqë:
   - Çelësin publik
   - Çelësi privat
   - Mesazhin e enkriptuar.
   - Mesazhin e dekriptuar (origjinal).

---

## Shembull i Daljes

```plaintext
Çelësi publik: (17, 3233)
Çelësi privat: (2753, 3233)
Vendosni mesazhin që dëshironi të enkriptoni: Hello World
Mesazhi i enkriptuar: 3000 1313 745 745 2185  604 2185 2412 745 1773 
Mesazhi i dekriptuar: Hello World

