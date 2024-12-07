# 1. Alegem o imagine de bază cu GCC preinstalat (compilatorul pentru C)
FROM gcc:latest

# 2. Setăm directorul de lucru în interiorul containerului
WORKDIR /app

# 3. Copiem fișierul sursă în container
COPY Proiect_Map.c .

# 4. Construim aplicația folosind gcc
RUN gcc Proiect_Map.c -o Proiect_MAP

# 5. Definim comanda implicită care va fi rulată când containerul este pornit
CMD ["./Proiect_MAP"]