``` mermaid
graph 
    A([Start]) --> B[/Enter Filesize/]
    B --> C[Calculate Time taken = filesize / 960]
    C --> D[Calculate how many days = time taken / 8600]
    D --> E[Calculate how many hours = reminder time from step 4 / 3600]
    E --> F[Calculate how many minutes = reminder time from step 5 / 60]
    F --> G[Calculate seconds = reminder time from step 6]
    G--> H[\Display time taken\]
    H --> J([End])
```