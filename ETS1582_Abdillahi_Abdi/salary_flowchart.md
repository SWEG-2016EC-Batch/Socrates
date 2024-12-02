``` mermaid
graph TD 
 A([Start]) --> B[/Read fullname,weekly working hours,base salary and bonus rate per hour /]

    B --> C[bonus payment= weekly working hours * bonus per hour]
       C --> D[Gross salary= base salary + bonus payment]
          D --> E[Net salary= gross salary - tax of 0.15 and pension of 0.05]
          E --> F[\Display the Result\]
    C --> F
    D --> F
     F --> G([end])
     

```