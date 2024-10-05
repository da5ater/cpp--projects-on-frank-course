.PHONY: clean All

All:
	@echo "----------Building project:[ tst - Debug ]----------"
	@cd "tst" && "$(MAKE)" -f  "tst.mk"
clean:
	@echo "----------Cleaning project:[ tst - Debug ]----------"
	@cd "tst" && "$(MAKE)" -f  "tst.mk" clean
