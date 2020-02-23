DATA=transformed_data
DATASET=java-med
BOOLEAN_EXCHANGE_DIR=../${DATA}/BooleanExchange/${DATASET}/test
LOOP_EXCHANGE_DIR=../${DATA}/LoopExchange/${DATASET}/test
PERMUTE_STATEMENT_DIR=../${DATA}/PermuteStatement/${DATASET}/test
RENAME_VARIABLE_DIR=../${DATA}/RenameVariable/${DATASET}/test
SWITCH_CONDITIONAL_DIR=../${DATA}/SwitchConditional/${DATASET}/test
TRY_CATCH_DIR=../${DATA}/TryCatch/${DATASET}/test
UNREACHABLE_STATEMENT_DIR=../${DATA}/UnreachableStatement/${DATASET}/test
UNUSED_STATEMENT_STATEMENT_DIR=../${DATA}/UnusedStatement/${DATASET}/test
PYTHON=python3
${PYTHON} split_parent_folder.py --path ${BOOLEAN_EXCHANGE_DIR} 
${PYTHON} split_parent_folder.py --path ${LOOP_EXCHANGE_DIR} 
${PYTHON} split_parent_folder.py --path ${PERMUTE_STATEMENT_DIR}
${PYTHON} split_parent_folder.py --path ${PERMUTE_STATEMENT_DIR}
${PYTHON} split_parent_folder.py --path ${PERMUTE_STATEMENT_DIR}
${PYTHON} split_parent_folder.py --path ${PERMUTE_STATEMENT_DIR}
${PYTHON} split_parent_folder.py --path ${PERMUTE_STATEMENT_DIR}