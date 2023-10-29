* URSA Factoring Challenge
Overview
This project aims to factorize numbers utilized for encrypting critical documents by discovering the prime factors. The task involves decrypting these documents by factoring these numbers before the encryption process is fixed by the target server.

Project Details
Author: Julien Barbier
Weight: 1
Project Start: October 16, 2023, 6:00 AM
Project End: October 30, 2023, 6:00 AM
Checker Release: October 19, 2023, 6:00 PM
Auto Review: Will be launched at the project deadline
Background Context
The project involves analyzing an unsecured network where numbers used for encryption have been identified. The security flaw lies in the fact that these numbers might not consistently employ sufficiently large prime factors. The mission is to factorize these numbers swiftly before the security loophole is fixed.

Note on Participation
This project is entirely optional. Engaging in any part of this project will contribute to a project grade of over 100% to your average. Non-participation won’t negatively impact your score. However, if your current average is greater than your score in this project, it might affect your overall average.

Resources
You may want to read or watch:

RSA (Encryption Algorithm)
How HTTPS Provides Security
Prime Factorization
Why RSA is Important
Requirements
General
You can use any programming language.
The operating system needs to be Standard Ubuntu 20.04 LTS.
Tasks
Task 0: Factorize all the things!
Description: Factorize as many numbers as possible into a product of two smaller numbers.
Usage: factors <file>
File Content: Contains natural numbers to factor, one per line.
Output Format: n=p*q (factorization format)
Execution Limit: 5 seconds.
Note: Your program should run without any additional dependencies.
Repository
GitHub Repository: RSA-Factoring-Challenge
Files: factors, rsa
Instructions
Clone the repository to your local environment.
Implement the factors and rsa scripts according to the provided requirements.
Push all scripts, source code, etc., to your repository.
Ensure your executable factors meets the outlined specifications and executes within the time limits.
Examples
Factorize Task
bash
Copy code
julien@ubuntu:~/factors$ cat tests/test00 
4
12
34
128
... (other numbers)
julien@ubuntu:~/factors$ time ./factors tests/test00
4=2*2
12=6*2
34=17*2
128=64*2
... (other factorizations)

real    0m0.009s
user    0m0.008s
sys     0m0.001s
RSA Task
bash
Copy code
julien@ubuntu:~/RSA Factoring Challenge$ cat tests/rsa-1
6
julien@ubuntu:~/RSA Factoring Challenge$ ./rsa tests/rsa-1
6=3*2
... (other factorizations for RSA numbers)
Feel free to adjust and add more specific instructions or information to suit the project's needs.

RSA Factoring Challenge
Overview
This project aims to factorize numbers utilized for encrypting critical documents by discovering the prime factors. The task involves decrypting these documents by factoring these numbers before the encryption process is fixed by the target server.

Project Details
Author: Julien Barbier
Weight: 1
Project Start: October 16, 2023, 6:00 AM
Project End: October 30, 2023, 6:00 AM
Checker Release: October 19, 2023, 6:00 PM
Auto Review: Will be launched at the project deadline
Background Context
The project involves analyzing an unsecured network where numbers used for encryption have been identified. The security flaw lies in the fact that these numbers might not consistently employ sufficiently large prime factors. The mission is to factorize these numbers swiftly before the security loophole is fixed.

Note on Participation
This project is entirely optional. Engaging in any part of this project will contribute to a project grade of over 100% to your average. Non-participation won’t negatively impact your score. However, if your current average is greater than your score in this project, it might affect your overall average.

* Resources
* You may want to read or watch:

* RSA (Encryption Algorithm)
* How HTTPS Provides Security
* Prime Factorization
* Why RSA is Important
* Requirements
* General
* You can use any programming language.
The operating system needs to be Standard Ubuntu 20.04 LTS.
Tasks
** Task 0: Factorize all the things!
Description: Factorize as many numbers as possible into a product of two smaller numbers.
Usage: factors <file>
File Content: Contains natural numbers to factor, one per line.
Output Format: n=p*q (factorization format)
Execution Limit: 5 seconds.
Note: Your program should run without any additional dependencies.
** Repository
** GitHub Repository: RSA-Factoring-Challenge
** Files: factors, rsa
** Instructions
Clone the repository to your local environment.
Implement the factors and rsa scripts according to the provided requirements.
Push all scripts, source code, etc., to your repository.
Ensure your executable factors meets the outlined specifications and executes within the time limits.
Examples
Factorize Task
bash
Copy code
julien@ubuntu:~/factors$ cat tests/test00 
4
12
34
128
... (other numbers)
julien@ubuntu:~/factors$ time ./factors tests/test00
4=2*2
12=6*2
34=17*2
128=64*2
... (other factorizations)

real    0m0.009s
user    0m0.008s
sys     0m0.001s
RSA Task
bash
Copy code
julien@ubuntu:~/RSA Factoring Challenge$ cat tests/rsa-1
6
julien@ubuntu:~/RSA Factoring Challenge$ ./rsa tests/rsa-1
6=3*2
... (other factorizations for RSA numbers)
