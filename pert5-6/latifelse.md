```mermaid
    flowchart TD;
    A(start) --> B[/float fJumlahBeli, fHarga, fDiskon/];
    B --> C[/string sBonus/];
    C --> D[print Harga Barang];
    D --> E[/input jumlah barang/];
    E --> F[print Jumlah Belinya];
    F --> G[/input jumlah belinya/];
    G --> H{jumlah beli > 15};
    H --ya--> I[/bonus payung/];
    I --> J[/diskon 0,15 x harga/];
    H --tidak--> K[/tidak ada bonus/];
    J --> O[selesai ifelse statement];
    K --> O;
    O --> M[print strip];
    M --> N[print diskon];
    N --> P[print bonus];
    P --> Q(finish)
    
```