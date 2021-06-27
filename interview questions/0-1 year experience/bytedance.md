# Bytedance
Under the microservice architecture, there will be a lot of independent services in the company.
Services can be called or depended on by each other. However, among all services, if circular dependencies occur, there can be catastrophic effects.
Please consider the following senario: for a specific service, only its direct dependencies are known to us. Please determine whether there are any circular dependencies among all the services.

## For example:
A service and one of its dependencies is represented as a pair ('A','B') where service A will depend on service B or access the APIs exposed by service B.
Now we have a list of service_relations = [('A','B'), ('A','C'), ('B','D'), ('D','A')]
## Output: 
true
## Explain: 
There is a cyclic dependency due to the existence of A-B-D-A.

## Tips: 
- Please make your code well structured and easy to extend.
- The representation of services can be anything. You can use strings, integers or even your own data structures. 
['A', 'B', 'C', 'D'] => [0,1,2,3]
