__ISP__
It is the second principle of the 5 SOLID principles.
It states that no client should be dependant on methods that it does not use.
It suggests that a client specific interface is better than general purpose interface.
I have demonstrated an example below , where a Manager depends on Iworkable and Imeetable interface whereas a Developer only depends on Iworkable interface.
Now if i had combined both Iworkable and Imeetable interface into 1 single interface then the Developer had to depend on methods of Imeetable also , which would had violated this principle.
