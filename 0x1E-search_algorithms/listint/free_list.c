{"payload":{"allShortcutsEnabled":false,"fileTree":{"listint":{"items":[{"name":"create_list.c","path":"listint/create_list.c","contentType":"file"},{"name":"free_list.c","path":"listint/free_list.c","contentType":"file"},{"name":"print_list.c","path":"listint/print_list.c","contentType":"file"}],"totalCount":3},"":{"items":[{"name":"listint","path":"listint","contentType":"directory"},{"name":"skiplist","path":"skiplist","contentType":"directory"}],"totalCount":2}},"fileTreeProcessingTime":3.330872,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":87369153,"defaultBranch":"master","name":"0x1D.c","ownerLogin":"alx-tools","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2017-04-06T00:37:01.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/13408012?v=4","public":true,"private":false,"isOrgOwned":true},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1491439023.0","canEdit":false,"refType":"branch","currentOid":"dcd867f9c52905e725209ebb1294f3003da0b234"},"path":"listint/free_list.c","currentUser":null,"blob":{"rawLines":["#include <stdlib.h>","#include \"search_algos.h\"","","/**"," * free_list - Deallocates a singly linked list"," *"," * @list: Pointer to the linked list to be freed"," */","void free_list(listint_t *list)","{","\tlistint_t *node;","","\tif (list)","\t{","\t\tnode = list->next;","\t\tfree(list);","\t\tfree_list(node);","\t}","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":25,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":47,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":48,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":14,"cssClass":"pl-en"},{"start":15,"end":24,"cssClass":"pl-smi"},{"start":25,"end":26,"cssClass":"pl-c1"},{"start":26,"end":30,"cssClass":"pl-s1"}],[],[{"start":1,"end":10,"cssClass":"pl-smi"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":12,"end":16,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":9,"cssClass":"pl-s1"}],[],[{"start":2,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":13,"cssClass":"pl-s1"},{"start":13,"end":15,"cssClass":"pl-c1"},{"start":15,"end":19,"cssClass":"pl-c1"}],[{"start":2,"end":6,"cssClass":"pl-en"},{"start":7,"end":11,"cssClass":"pl-s1"}],[{"start":2,"end":11,"cssClass":"pl-en"},{"start":12,"end":16,"cssClass":"pl-s1"}],[],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/alx-tools/0x1D.c/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/alx-tools/0x1D.c/security/dependabot","repoSecurityAndAnalysisPath":"/alx-tools/0x1D.c/settings/security_analysis","repoOwnerIsOrg":true,"currentUserCanAdminRepo":false},"displayName":"free_list.c","displayUrl":"https://github.com/alx-tools/0x1D.c/blob/master/listint/free_list.c?raw=true","headerInfo":{"blobSize":"281 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"b0e9630","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Falx-tools%2F0x1D.c%2Fblob%2Fmaster%2Flistint%2Ffree_list.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"19","truncatedSloc":"17"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/alx-tools/0x1D.c/discussions/new","newIssuePath":"/alx-tools/0x1D.c/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/alx-tools/0x1D.c/blob/master/listint/free_list.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/alx-tools/0x1D.c/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"alx-tools","repoName":"0x1D.c","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"free_list","kind":"function","identStart":160,"identEnd":169,"extentStart":160,"extentEnd":186,"fullyQualifiedName":"free_list","identUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":14}},"extentUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":31}}}]}},"copilotInfo":null,"csrf_tokens":{"/alx-tools/0x1D.c/branches":{"post":"zOSpYjWpcZGKM2kOOFSGO8mcln_E9LzYU6AfUmNIat3oMBrnguu1r7CO10XdjUfi09Gggk8p-sil5b3A1yjfVA"},"/repos/preferences":{"post":"qK0o7NkDn2cK48IRI1n1qVvm5nNoyxzaAWulrM-qr3SUEU4zqnT_tEJxQJRY1HvnzHlQK3GKmN2P8ckdVLuO2g"}}},"title":"0x1D.c/listint/free_list.c at master · alx-tools/0x1D.c"}