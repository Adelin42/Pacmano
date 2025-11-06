# Pacmano

Acest branch conține modificările realizate conform cerințelor proiectului pentru implementarea completă a conceptelor OOP (programare orientată pe obiecte).

---

##  Modificări principale

### 1. Constructori și operatori adăugați pentru structurile de date

Pentru fiecare structură de date care reprezintă elemente de joc (de exemplu: jucător, inamic, perete, obiect colectabil etc.), au fost implementați:

- **Constructor implicit** – inițializează obiectul cu valori implicite.  
- **Constructor de copiere** – creează un nou obiect copiat dintr-un altul existent.  
- **Constructor cu parametri** – permite inițializarea obiectului direct cu valori primite.  
- **Operator de atribuire (`=`)** – permite copierea conținutului unui obiect în altul.  
- **Operatori de comparare (`==`, `!=`)** – compară două obiecte pentru egalitate sau inegalitate.  
- **Operatori de intrare/ieșire (`>>`, `<<`)** – facilitează citirea și afișarea datelor obiectelor.  

Acestea au fost adăugate pentru fiecare clasă/structură care gestionează un element al jocului.

---

### 2. Clasă abstractă pentru redarea obiectelor de joc

A fost creată o **clasă de bază abstractă** denumită `RenderableObject`, responsabilă pentru redarea obiectelor grafice.  
Aceasta definește metode virtuale pure precum:

- `virtual void draw(sf::RenderWindow&) = 0;`  
- `virtual void update(float deltaTime) = 0;`

Clasele derivate (precum `Player`, `Enemy`, `Wall`, `Fruit` etc.) moștenesc această clasă și implementează metodele conform comportamentului lor specific.

Această modificare permite:
- folosirea **polimorfismului**;
- separarea logicii de afișare de logica de joc;
- extinderea ușoară a codului pentru noi tipuri de obiecte.

---

### 3. Alte îmbunătățiri
 
- Au fost făcute corecturi minore pentru consistență.  
- Structura originală a proiectului a fost păstrată.  

---

##  Scopul modificărilor

Aceste schimbări demonstrează utilizarea corectă a conceptelor OOP:
- **Moștenire** – clasele derivate extind comportamentul clasei abstracte.  
- **Polimorfism** – obiectele sunt desenate și actualizate prin interfața comună `RenderableObject`.  
- **Encapsulare și modularitate** – fiecare clasă gestionează propria logică.  
- **Supraincarcare de operatori** – pentru manipularea intuitivă a obiectelor.