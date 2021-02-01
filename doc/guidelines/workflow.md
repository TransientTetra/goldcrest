# GoldCrest
# Workflow guidelines
## Overview
This document specifies the workflow and methods of contributing to the project.

All contributors are welcome, but please read this document and follow the guidelines specified within.

## Contributing
You can help the project in two ways: spotting and issuing bugs or feature requests and resolving issues.
Issues come in several flavors: documentation, testing, bug and feature. One issue can cover some categories
at once, e.g. feature + testing issue for a new feature and new tests to cover it.

To help understand the workflow we have prepared a diagram along with an explanation, both of which you
can find in the further sections.

## Workflow
If you find an issue that needs to be addressed, be it documentation related, a bug or a feature request
please use the issue tool at github. Give the issue a concise but descriptive name, if you have any details
they can be added in the description or a comment under the issue. Don't open issues with names that are pasted
error messages or similar, their place is in the description. Also, if you find a bug please describe the steps
needed to reproduce it.

If you want to improve the code of the project the first thing you'll have to do is find an issue that
you want to work on that doesn't have an assigned dev. After that contact any of the maintainers to get
assigned to the issue (optional, but guarantees that no one will start to work on it). Then you'll have
to fork the repo, create a branch for the issue on your repo and start working on the issue. Branch names
have to be one of the following: 
- feature/#n
- testing/#n
- doc/#n
- bugfix/#n

where #n refers to the issue's number (e.g. doc/#6).

Additionally all commits have to be prefaced with the issue's number as well (e.g. "#6: Do sth").
That way github links the commits to the issue. As you can see, if an issue has multiple tasks such as
a feature and tests, then multiple branches have to be made for each. This is why it is preferable to create
separate issues for separate tasks including features and their tests.

When you have finished working on the issue you'll have to compile the project to confirm it compiles and
run the whole test suite. Then you can commit your changes and open a pull request.
Remember to open pull requests from your issue branch to the project's dev branch.
With an open pull request a maintainer will do a code review. If the reviewer doesn't find any issues and gives
a green light you can merge the branch into dev. If the reviewer finds any problems or has questions he will comment
on the pull request. Dev branch is merged into master periodically by the maintainers.

## Workflow diagram
<img alt="Workflow diagram" src="./doc/images/workflow_diagram.png"/>