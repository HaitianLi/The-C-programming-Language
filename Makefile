BRANCHNAME=Yourname_branch4
REMOTE=Your_remote_name2
COMMIT="your message"
URL="https://github.com/HaitianLi/The-C-programming-Language.git"
##

branch:
	git checkout -b $(BRANCHNAME)
	git push origin $(BRANCHNAME)
	git remote add $(REMOTE) $(BRANCHNAME)
	git push --set-upstream origin $(BRANCHNAME)
push:
	git add .
	git commit -m $(COMMIT)
	git push $(REMOTE) $(URL)

##everything up to date