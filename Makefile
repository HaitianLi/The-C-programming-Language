BRANCHNAME=Yourname_branch
COMMIT="your message"

branch:
	git checkout -b $(BRANCHNAME)
	git push origin $(BRANCHNAME)
push:
	git add .
	git commit -m $(COMMIT)
	git push

