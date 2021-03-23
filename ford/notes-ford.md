## How to add Key Manager as Dependency for GKMS(Group Key Management System)
* Create [PR build for ECG/CMA-KD](https://github.ford.com/ECG/CMA-KD/pull/204), branch name: [topic/ECG-75699](https://www.jira.ford.com/browse/ECG-75699)
* Create [PR build for ECG/build](https://github.ford.com/ECG/build/pull/1616), branch name: [topic/ECG-77371](https://www.jira.ford.com/browse/ECG-77371)
  * In "fnv_recurse.mk"
  ```
  fnv_keymanager_client:fnv_libtelemetry fnv_base
	$(MAKE) -C keymanager/keymgr/public $(_clean)		$(MAKE) -C keymanager/keymgr/public $(_clean)
	$(MAKE) -C keymanager/keymgr/client $(_clean)		$(MAKE) -C keymanager/keymgr/client $(_clean)
	(1) $(MAKE) -C keymanager/ecg_shekeyupdate/interface $(_clean)
	(2) $(MAKE) -C keymanager/ecg_shekeyupdate/client $(_clean)
  ...
  (3) ecg_cma-kd:fnv_base fnv_idl fnv_libtelemetry fnv_crypto fnv_vimclient fnv_tokenmanager_client fnv_syncp ecg_spcm ecg_och ecg_framework fnv_keymanager_client
  ```
 * In "ecg2/fnv_makefile"
 ```
 fnv_keymanager_client:fnv_base
	$(MAKE) -C keymanager/keymgr/public $(_clean)		$(MAKE) -C keymanager/keymgr/public $(_clean)
	$(MAKE) -C keymanager/keymgr/client $(_clean)		$(MAKE) -C keymanager/keymgr/client $(_clean)
	(4) $(MAKE) -C keymanager/ecg_shekeyupdate/interface $(_clean)
	(5) $(MAKE) -C keymanager/ecg_shekeyupdate/client $(_clean)
  ...
  (6) ecg_cma-kd:fnv_base fnv_idl fnv_libtelemetry fnv_crypto fnv_vimclient fnv_tokenmanager_client fnv_syncp ecg_spcm ecg_framework fnv_keymanager_client
 ```

* Create [Testing PR build for ECG/manifest](https://github.ford.com/ECG/manifest/pull/850), branch name: [topic/ECG-77388](https://www.jira.ford.com/browse/ECG-77388)
  * In default.xml
  ```
  (1) <project name="ECG/build" path="ecg/build" revision="topic/ECG-77371">
  ...
  (2) <project name="ECG/CMA-KD" path="ecg/cma-kd" revision="topic/ECG-75699" />
  ```
