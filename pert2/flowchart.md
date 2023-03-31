```mermaid
    flowchart TD;
    A(start) --> B[/Masukkan Nilai P/];
    B --> C{Bukan Angka}
    C -- Ya --> B
    C -- Tidak -->D[/Masukkan Nilai L/];
    D --> E{Bukan Angka}
    E -- Ya --> D
    E -- Tidak -->F[/Masukkan Nilai L/];
    F --> G[Luas = P x L];
    G --> I[Tampilkan Hasil];
    I --> J(finish);
```