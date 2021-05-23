BRANCHNAME=Yourname_branch6
REMOTE=Your_remote_name4
COMMIT="your message"
URL="https://github.com/HaitianLi/The-C-programming-Language.git"
##

branch:
	git checkout -b $(BRANCHNAME)
	git push -u origin $(BRANCHNAME)
	# git remote add $(REMOTE) $(BRANCHNAME)
	# git push --set-upstream origin $(BRANCHNAME)
	####

push:
	git add .
	git commit -m $(COMMIT)
	git push

####