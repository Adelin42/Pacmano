# Pacmano

O clonă a jocului legendar **Pac-Man**, implementată în **C++**.  
Scopul proiectului este educațional, oferind un exemplu simplu de organizare a unui joc în fișiere separate și rulare prin Makefile.

---

## Regulile jocului
- Colectezi puncte  
- Eviți fantomele  
- Explorezi tuneluri  

---

## Fișiere și roluri

### Fișiere `.hpp`
- **Point** – gestionează coordonatele pe hartă  
- **Direction** – definește direcția de mișcare  
- **Map** – dimensiunea și logica hărții  
- **Pacmano** – jucătorul principal  
- **Ghost** – inamicii  
- **GameEngine** – logica generală a jocului  
- **Drawer** – desenarea elementelor în consolă  

### Fișiere `.cpp`
- **point.cpp** – implementarea clasei Point  
- **direction.cpp** – implementarea direcțiilor de mișcare  
- **map.cpp** – inițializarea și afișarea hărții în consolă  
- **pacmano.cpp** – mișcarea și poziția jucătorului principal  
- **ghost.cpp** – comportamentul de bază al fantomelor  
- **game_engine.cpp** – bucla principală și logica jocului  
- **drawer.cpp** – funcții pentru randarea elementelor în consolă  
- **main.cpp** – punctul de intrare al programului  

### Makefile
- Automatizează compilarea proiectului  
- Compilează fiecare fișier `.cpp` într-un `.o`  
- Le leagă într-un executabil numit `pacman`  
- Include comanda `clean` pentru a șterge fișierele obiect și executabilul  
- Simplifică rularea proiectului cu un singur `make`  


