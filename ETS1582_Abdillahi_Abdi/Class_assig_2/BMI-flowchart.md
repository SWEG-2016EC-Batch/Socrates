``` mermaid
graph 
    A([Start]) --> B[/Enter weight and height/]
    B --> C[Calculate BMI as weight / height * height]
    C --> D{Check BMI}
    D -- BMI <= 18.5 --> E{ status =Underweight}
    D -- 18.5 < BMI <= 24.9 --> F{ status =Normal}
    D -- BMI >= 25 --> G{ status = Overweight}
    D -- Else --> H[\Incorrect BMI\]
    E --> I[\Display BMI Value and status\]
    F --> I
    G --> I
    H --> K
    I --> J{Calculate another BMI?}
    J -- Yes --> B
    J -- No --> K([end])
```