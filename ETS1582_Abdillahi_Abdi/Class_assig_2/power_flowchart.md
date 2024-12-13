``` mermaid
graph TD 
 A([Start]) --> B[/Enter base num and exponent num/]
    B --> C{Exponent num !=0}
    C -- Yes --> D
    D --> C
    C -- No --> E([end])

```