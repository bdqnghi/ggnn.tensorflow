DATA=transformed_data
DATASET=java-med
BOOLEAN_EXCHANGE_DIR=../${DATA}/BooleanExchange/${DATASET}
LOOP_EXCHANGE_DIR=../${DATA}/LoopExchange/${DATASET}
PERMUTE_STATEMENT_DIR=../${DATA}/PermuteStatement/${DATASET}
RENAME_VARIABLE_DIR=../${DATA}/RenameVariable/${DATASET}
SWITCH_CONDITIONAL_DIR=../${DATA}/SwitchConditional/${DATASET}
TRY_CATCH_DIR=../${DATA}/TryCatch/${DATASET}
UNREACHABLE_STATEMENT_DIR=../${DATA}/UnreachableStatement/${DATASET}
UNUSED_STATEMENT_STATEMENT_DIR=../${DATA}/UnusedStatement/${DATASET}
PYTHON=python3
${PYTHON} clean_up_folder.py --path ${BOOLEAN_EXCHANGE_DIR} 
${PYTHON} clean_up_folder.py --path ${LOOP_EXCHANGE_DIR} 
${PYTHON} clean_up_folder.py --path ${PERMUTE_STATEMENT_DIR} 
${PYTHON} clean_up_folder.py --path ${RENAME_VARIABLE_DIR} 
${PYTHON} clean_up_folder.py --path ${SWITCH_CONDITIONAL_DIR} 
${PYTHON} clean_up_folder.py --path ${TRY_CATCH_DIR} 
${PYTHON} clean_up_folder.py --path ${UNREACHABLE_STATEMENT_DIR} 
${PYTHON} clean_up_folder.py --path ${UNUSED_STATEMENT_STATEMENT_DIR}