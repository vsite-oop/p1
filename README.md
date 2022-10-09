# VSITE OOP predavanje 1

Implementirajte sve funkcije potrebne da svi testovi prolaze.

![Build and test status](https://github.com/vsite-oop/p01/actions/workflows/msbuild.yml/badge.svg)

### Uputstva za rješavanje / slanje rješenja:

1. Napravite *fork* repozitorija

<kbd><img src="img/fork.jpg" alt="New Fork" height="100"></kbd>

Unesite ime repozitorija (nešto kao vsite-oop-p01) ili ostavite p01. Kliknite "Create Fork"

2. Na Actions, odaberite "I understand my workflows, go ahead and enable them"

<kbd><img src="img/actions.jpg" alt="Enable Workflows" height="100"></kbd>

3. Napravite *clone* repozitorija. 

<kbd><img src="img/clone.jpg" alt="Clone a Repository" height="100"></kbd>

Koristeći VS 2022:
- "Repository Location" dobijete klikom na Code, nešto poput "https://github.com/[stud]/vsite-oop-p01.git"
- "Path" je folder na PC-u, nešto poput C:\vsite\kol\oop\[stud]\p01

<kbd><img src="img/code.jpg" alt="Code" height="100"></kbd>

4. U VS otvorite Test Explorer (menu Test / "Test Explorer")

5. Pokrenite build solutiona (menu Build / "Build Solution")

<kbd><img src="img/solution.jpg" alt="Solution" height="100"></kbd>

6. Build nije prošao. Testovi u `test.cpp` se ne kompajliraju 
jer ne postoje funkcije koje testovi pozivaju.
Upravo ste u "red" stanju TDD-a. 

7. U `app.h` dodajte deklaracije traženih funkcija (`f1` do `f6`). 
Sad kad pokrenete build, kompajliranje prođe, ali linker prijavljuje greške 
jer nije našao kod funkcija.

8. U `app.cpp` dodajte implementaciju funkcija (`f1` fo `f6`). 
Sad kad pokrenete build, build će proći i Test Explorer će pokazati pronađene testove.

<kbd><img src="img/test discovery.jpg" alt="Test Discovery" height="100"></kbd>

9. Pokrenite testove. Ako su implementacije funkcija točne svi će testovi biti zeleni.
Sad ste u "green" fazi TDD-a. 
Napravite popravke i promjene na kodu ako treba ("refactor" faza TDD-a). 
Pokrećite testove nakon svake promjene.

<kbd><img src="img/test run.jpg" alt="Test Run" height="100"></kbd>

10. Dodajte u git commit samo one fileove koje ste promijenili ("Stage" na `app.h` i `app.cpp`)

<kbd><img src="img/stage.jpg" alt="Stage" height="100"></kbd>

11. Napišite komentar i napravite commit.

<kbd><img src="img/commit.jpg" alt="Commit" height="100"></kbd>

12. Napravite push commit-a u Github repozitorij.

<kbd><img src="img/push.jpg" alt="Push" height="100"></kbd>

13. Na Actions tabu na Githubu (https://github.com/[stud]/vsite-oop-p01/actions) 
bi se morao pojaviti "workflow run" i nakon nekog vremena zazeleniti.

<kbd><img src="img/workflow.jpg" alt="Workflow" height="100"></kbd>

14. Ako je sve zeleno, napravite *pull request* (u VS: menu Git / Github / New Pull Request). 

<kbd><img src="img/pull request.jpg" alt="Pull Request" height="100"></kbd>

Ako je sve prošlo OK, vidjet ćete svoj PR na popisu https://github.com/vsite-oop/p01/pulls.
