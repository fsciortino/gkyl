;;; -*- Mode: LISP; package:maxima; syntax:common-lisp; -*- 
(in-package :maxima)
(DSKSETQ |$varsC| '((MLIST SIMP) $X)) 
(ADD2LNC '|$varsC| $VALUES) 
(DSKSETQ |$varsP| '((MLIST SIMP) $X $VX $VY)) 
(ADD2LNC '|$varsP| $VALUES) 
(DSKSETQ |$basisC|
         '((MLIST SIMP
            (10.
             "/Users/JunoRavin/gkyl/cas-scripts/basis-precalc/basis-pre-calc.mac"
             SRC |$writeBasisToFile| 7.))
           ((MLIST SIMP
             (32. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
              |$gsOrthoNorm| 30.))
            ((MEXPT SIMP) 2. ((RAT SIMP) -1. 2.))
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -1. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $X))
           ((MLIST SIMP
             (32. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
              |$gsOrthoNorm| 30.))
            ((MEXPT SIMP) 2. ((RAT SIMP) -1. 2.))
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -1. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $X)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $X 2.))))
           ((MLIST SIMP
             (32. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
              |$gsOrthoNorm| 30.))
            ((MEXPT SIMP) 2. ((RAT SIMP) -1. 2.))
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -1. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $X)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $X 2.)))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 7. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $X)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $X 3.)))))) 
(ADD2LNC '|$basisC| $VALUES) 
(DSKSETQ |$basisP|
         '((MLIST SIMP
            (10.
             "/Users/JunoRavin/gkyl/cas-scripts/basis-precalc/basis-pre-calc.mac"
             SRC |$writeBasisToFile| 7.))
           ((MLIST SIMP
             (32. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
              |$gsOrthoNorm| 30.))
            ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $X)
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $VX)
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $VY)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.)) $VX $X)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.)) $VY $X)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.)) $VX $VY)
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 3. 2.)) $VX $VY $X))
           ((MLIST SIMP
             (32. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
              |$gsOrthoNorm| 30.))
            ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $X)
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $VX)
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $VY)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.)) $VX $X)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.)) $VY $X)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.)) $VX $VY)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $X 2.)))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $VX 2.)))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $VY 2.)))
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 3. 2.)) $VX $VY $X)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               $X)))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
              ((MTIMES SIMP) $VY
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               $VY)))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               $X)))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.))))
            ((MTIMES SIMP) 9. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $VY)
              ((MTIMES SIMP) $VX $VY
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))))
            ((MTIMES SIMP) 9. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               $VY $X)))
            ((MTIMES SIMP) 9. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $X)
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               $X)))
            ((MTIMES SIMP) 45. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VX 2.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $X 2.)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))))
            ((MTIMES SIMP) 45. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VY 2.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $X 2.)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))))
            ((MTIMES SIMP) 45. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VX 2.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VY 2.)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.))))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 5. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 9.) $VY)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $VY)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               $VY
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                ((MTIMES SIMP) $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 5. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 9.) $VX)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.))))
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 5. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 9.) $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               $X)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $X)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 $X)))))
            ((MTIMES SIMP) 27. ((MEXPT SIMP) 2. ((RAT SIMP) -9. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 3. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 27.)
              ((MTIMES SIMP) ((RAT SIMP) -1. 9.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VX 2.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 9.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VY 2.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VX 2.)))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VY 2.)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.))))
              ((MTIMES SIMP) ((RAT SIMP) -1. 9.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $X 2.)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VX 2.)))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $X 2.)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VY 2.)))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $X 2.)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.)))))))
           ((MLIST SIMP
             (32. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
              |$gsOrthoNorm| 30.))
            ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $X)
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $VX)
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.)) $VY)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.)) $VX $X)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.)) $VY $X)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.)) $VX $VY)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $X 2.)))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $VX 2.)))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $VY 2.)))
            ((MTIMES SIMP) ((MEXPT SIMP) 2. ((RAT SIMP) -3. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 3. 2.)) $VX $VY $X)
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               $X)))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
              ((MTIMES SIMP) $VY
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               $VY)))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               $X)))
            ((MTIMES SIMP) 3. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 15. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.))))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 7. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $X)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $X 3.)))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 7. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $VX 3.)))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 7. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY)
              ((MEXPT SIMP
                (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                 |$calcPowers| 62.))
               $VY 3.)))
            ((MTIMES SIMP) 9. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $VY)
              ((MTIMES SIMP) $VX $VY
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))))
            ((MTIMES SIMP) 9. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               $VY $X)))
            ((MTIMES SIMP) 9. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $X)
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               $X)))
            ((MTIMES SIMP) 45. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VX 2.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $X 2.)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))))
            ((MTIMES SIMP) 45. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VY 2.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $X 2.)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))))
            ((MTIMES SIMP) 45. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VX 2.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VY 2.)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.))))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 21. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 21. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               $X)))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 21. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
              ((MTIMES SIMP) $VY
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 21. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               $VY)))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 21. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               $X)))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 21. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.))))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 5. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 9.) $VY)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $VY)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               $VY
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                ((MTIMES SIMP) $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 5. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 9.) $VX)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.))))
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))))
            ((MTIMES SIMP) 5. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 5. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 9.) $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               $X)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $X)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 $X)))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 7. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
              ((MTIMES SIMP) $VX $VY
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 7. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               $VY $X)))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -5. 2.))
             ((MEXPT SIMP) 7. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               $X)))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 35. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $X)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $X)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $X)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $X 3.)))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 35. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VX 3.)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 35. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $X)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 $X)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $X)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $X 3.)))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 35. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VX 3.)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.))))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 35. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VY)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VY 3.)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                ((MTIMES SIMP) $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 35. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VY)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $VY)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VY 3.)))))
            ((MTIMES SIMP) 27. ((MEXPT SIMP) 2. ((RAT SIMP) -9. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 3. 2.))
             ((MPLUS SIMP) ((RAT SIMP) -1. 27.)
              ((MTIMES SIMP) ((RAT SIMP) -1. 9.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VX 2.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 9.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VY 2.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VX 2.)))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VY 2.)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.))))
              ((MTIMES SIMP) ((RAT SIMP) -1. 9.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $X 2.)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VX 2.)))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $X 2.)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((RAT SIMP) -1. 9.)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VY 2.)))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((RAT SIMP) -1. 3.)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $X 2.)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 105. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VY $X)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $VY $X)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               $VY
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
                ((MTIMES SIMP) $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 105. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX $VY)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 $VY)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               $VY
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $VY)
                ((MTIMES SIMP) $VX $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 105. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX $X)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $X)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 $X)))
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 105. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               $X)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 $X)))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $X)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 $X)))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 105. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX $VY)
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.))))
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $VY)
                ((MTIMES SIMP) $VX $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))))
            ((MTIMES SIMP) 15. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 105. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VY $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               $X)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $VY $X)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 $X)))))
            ((MTIMES SIMP) 175. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VX $X)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 $X)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))))))
            ((MTIMES SIMP) 175. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VY $X)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 $X)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
                ((MTIMES SIMP) $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))))))
            ((MTIMES SIMP) 175. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VX $VY)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 $VY)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.))))))
            ((MTIMES SIMP) 225. ((MEXPT SIMP) 2. ((RAT SIMP) -9. 2.))
             ((MEXPT SIMP) 7. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 15.) $X)
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $X)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 $X)))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 9.) $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 $X)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 2.)
                   $X)))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 2.)
                   $X)))))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 9.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $X)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $X 3.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $X)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 2.)
                   $X)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $X)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $X 3.)))))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $X)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 2.)
                   $X)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $X)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $X 3.)))))))
            ((MTIMES SIMP) 225. ((MEXPT SIMP) 2. ((RAT SIMP) -9. 2.))
             ((MEXPT SIMP) 7. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 15.) $VX)
              ((MTIMES SIMP) ((RAT SIMP) -1. 9.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VX 3.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.))))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VX 3.)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 2.))))))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VX 3.)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 2.))))))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 9.) $VX)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 2.))))
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 2.))))))))
            ((MTIMES SIMP) 225. ((MEXPT SIMP) 2. ((RAT SIMP) -9. 2.))
             ((MEXPT SIMP) 7. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 15.) $VY)
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $VY)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 9.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY)
                ((MEXPT SIMP
                  (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                   |$calcPowers| 62.))
                 $VY 3.)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VY)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 2.)
                   $VY)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VY 3.)))))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                ((MTIMES SIMP) $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VY)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY)
                  ((MEXPT SIMP
                    (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                     SRC |$calcPowers| 62.))
                   $VY 3.)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                  ((MTIMES SIMP) $VY
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 2.))))))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 9.) $VY)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 2.)
                   $VY)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY)
                  ((MTIMES SIMP) $VY
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 2.))))))))
            ((MTIMES SIMP) 175. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VX $VY $X)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 $VY $X)))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               $VY
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                ((MTIMES SIMP) $VX $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))))))
            ((MTIMES SIMP) 175. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VX $VY $X)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 $X)))
              ((MTIMES SIMP) $VX
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                ((MTIMES SIMP) $VX $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))))))
            ((MTIMES SIMP) 175. ((MEXPT SIMP) 2. ((RAT SIMP) -7. 2.))
             ((MEXPT SIMP) 3. ((RAT SIMP) 1. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VX $VY $X)
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               $X)
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 $VY $X)))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 $X)))))
            ((MTIMES SIMP) 21. ((MEXPT SIMP) 2. ((RAT SIMP) -9. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 5. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 25.) $VX $X)
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 $X)))
              ((MTIMES SIMP) ((RAT SIMP) -9. 25.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $X)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 $X)))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 $X)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 3.)
                   $X)))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $X)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 2.)
                   $X)))))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VX $X)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 3.)
                   $X)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 3.))))))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX $X)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $X)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 2.)
                   $X)))
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $X)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 3.))))))))
            ((MTIMES SIMP) 21. ((MEXPT SIMP) 2. ((RAT SIMP) -9. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 5. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 25.) $VY $X)
              ((MTIMES SIMP) ((RAT SIMP) -9. 25.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $VY $X)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 $X)))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VY $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 $X)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 2.)
                   $VY $X)))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 3.)
                   $X)))))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 2.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
                ((MTIMES SIMP) $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VY $X)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 3.)
                   $X)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
                  ((MTIMES SIMP) $VY
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 3.))))))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VY $X)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VY $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 2.)
                   $VY $X)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 2.)
                 $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VY $X)
                  ((MTIMES SIMP) $VY
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 3.))))))))
            ((MTIMES SIMP) 21. ((MEXPT SIMP) 2. ((RAT SIMP) -9. 2.))
             ((MEXPT SIMP) 5. ((RAT SIMP) 5. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 25.) $VX $VY)
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 $VY)))
              ((MTIMES SIMP) ((RAT SIMP) -1. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.))))
              ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VX $VY)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 3.)
                   $VY)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 3.))))))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 2.))
              ((MTIMES SIMP) ((RAT SIMP) -9. 25.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $VY)
                ((MTIMES SIMP) $VX $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX $VY)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 3.)
                   $VY)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $VY)
                  ((MTIMES SIMP) $VX $VY
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 2.))))))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 5.) $VX $VY)
                ((MTIMES SIMP) ((RAT SIMP) -1. 3.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 3.))))
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 2.))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -1. 3.) $VX $VY)
                  ((MTIMES SIMP) $VX $VY
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 2.))))))))
            ((MTIMES SIMP) 125. ((MEXPT SIMP) 2. ((RAT SIMP) -9. 2.))
             ((MEXPT SIMP) 7. ((RAT SIMP) 3. 2.))
             ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -27. 125.) $VX $VY $X)
              ((MTIMES SIMP) ((RAT SIMP) -9. 25.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 $VY $X)))
              ((MTIMES SIMP) ((RAT SIMP) -9. 25.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 $X)))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VX $VY $X)
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 $X)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 3.)
                   $VY $X)))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 3.)
                   $X)))))
              ((MTIMES SIMP)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VX 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $VY 3.)
               ((MEXPT SIMP
                 (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                  |$calcPowers| 62.))
                $X 3.))
              ((MTIMES SIMP) ((RAT SIMP) -9. 25.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                ((MTIMES SIMP) $VX $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VX $VY $X)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                  ((MTIMES SIMP)
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VX 3.)
                   $VY $X)))
                ((MTIMES SIMP)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VX 3.)
                 $VY
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                  ((MTIMES SIMP) $VX $VY
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 3.))))))
              ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
               ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -9. 25.) $VX $VY $X)
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                  ((MTIMES SIMP) $VX
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $VY 3.)
                   $X)))
                ((MTIMES SIMP) $VX
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $VY 3.)
                 ((MEXPT SIMP
                   (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac" SRC
                    |$calcPowers| 62.))
                  $X 3.))
                ((MTIMES SIMP) ((RAT SIMP) -3. 5.)
                 ((MPLUS SIMP) ((MTIMES SIMP) ((RAT SIMP) -3. 5.) $VX $VY $X)
                  ((MTIMES SIMP) $VX $VY
                   ((MEXPT SIMP
                     (62. "/Users/JunoRavin/gkyl/cas-scripts/modal-basis.mac"
                      SRC |$calcPowers| 62.))
                    $X 3.))))))))))) 
(ADD2LNC '|$basisP| $VALUES) 