[1mdiff --git a/README.md b/README.md[m
[1mindex 968a033..e35103a 100644[m
[1m--- a/README.md[m
[1m+++ b/README.md[m
[36m@@ -1,2 +1,3 @@[m
 # clone-tabnews[m
[32m+[m
 Projeto para treinar programação[m
[1mdiff --git a/package-lock.json b/package-lock.json[m
[1mindex e961b1a..ff41e3f 100644[m
[1m--- a/package-lock.json[m
[1m+++ b/package-lock.json[m
[36m@@ -12,6 +12,9 @@[m
         "next": "^13.1.6",[m
         "react": "^18.2.0",[m
         "react-dom": "^18.2.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "devDependencies": {[m
[32m+[m[32m        "prettier": "^3.6.2"[m
       }[m
     },[m
     "node_modules/@next/env": {[m
[36m@@ -381,6 +384,21 @@[m
         "node": "^10 || ^12 || >=14"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/prettier": {[m
[32m+[m[32m      "version": "3.6.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/prettier/-/prettier-3.6.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-I7AIg5boAr5R0FFtJ6rCfD+LFsWHp81dolrFD8S79U9tb8Az2nGrJncnMSnys+bpQJfRUzqs9hnA81OAA3hCuQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "bin": {[m
[32m+[m[32m        "prettier": "bin/prettier.cjs"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=14"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/prettier/prettier?sponsor=1"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/react": {[m
       "version": "18.2.0",[m
       "resolved": "https://registry.npmjs.org/react/-/react-18.2.0.tgz",[m
[1mdiff --git a/package.json b/package.json[m
[1mindex 9c249ee..5fa4aea 100644[m
[1m--- a/package.json[m
[1m+++ b/package.json[m
[36m@@ -4,7 +4,9 @@[m
   "description": "Projeto para treinar programação",[m
   "main": "index.js",[m
   "scripts": {[m
[31m-    "dev": "next dev"[m
[32m+[m[32m    "dev": "next dev",[m
[32m+[m[32m    "lint:check": "prettier --check .",[m
[32m+[m[32m    "lint:fix": "prettier --write ."[m
   },[m
   "author": "",[m
   "license": "MIT",[m
[36m@@ -12,5 +14,8 @@[m
     "next": "^13.1.6",[m
     "react": "^18.2.0",[m
     "react-dom": "^18.2.0"[m
[32m+[m[32m  },[m
[32m+[m[32m  "devDependencies": {[m
[32m+[m[32m    "prettier": "^3.6.2"[m
   }[m
 }[m
[1mdiff --git a/pages/index.js b/pages/index.js[m
[1mindex 59b4c13..5eea746 100644[m
[1m--- a/pages/index.js[m
[1m+++ b/pages/index.js[m
[36m@@ -1,7 +1,9 @@[m
[31m-function Home(){[m
[31m-    return([m
[31m-        <h1>Eu amo você</h1>[m
[31m-    )  [m
[32m+[m[32mfunction Home() {[m
[32m+[m[32m  return <h1>Eu amo você</h1>;[m
 }[m
 [m
[31m-export default Home;//padrão[m
\ No newline at end of file[m
[32m+[m[32mfunction teste() {[m
[32m+[m[32m  console.log("teste");[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mexport default Home; //padrão[m
