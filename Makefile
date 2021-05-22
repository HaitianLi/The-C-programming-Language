BRANCHNAME=Yourname_branch2
REMOTE=Your_remote_name
COMMIT="your message"
URL=https://github.com/HaitianLi/The-C-programming-Language.git

branch:
	git checkout -b $(BRANCHNAME)
	git push origin $(BRANCHNAME)
	git remote add $(REMOTE) $(BRANCHNAME)
push:
	git add .
	git commit -m $(COMMIT)
	git push $(REMOTE) $(URL)

