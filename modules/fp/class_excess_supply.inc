<?php

class excess_supply extends dbOraObject {

 public static $table_name = "excess_supply";
 public static $primary_column = "ITEM_NUMBER";
 public $field_a = [
		 'DATE_RUN',
		 'PERIOD_NAME',
		 'FISCAL_WEEK_ID',
		 'PLANNING_METHOD',
		 'ORGANIZATION_ID',
		 'ORGANIZATION_CODE',
		 'INVENTORY_ITEM_ID',
		 'ITEM_NUMBER',
		 'ITEM_DESCRIPTION',
		 'UOM',
		 'ITEM_TYPE',
		 'CURRENT_ABC_CLASS',
		 'ORG_TBU',
		 'ORG_FAMILY',
		 'ORG_LINE',
		 'SOURCING_COMMODITY',
		 'PLANNER',
		 'BUYER',
		 'INVENTORY_PLANNING_METHOD',
		 'MIN_MAX_MIN_QTY',
		 'MIN_MAX_MAX_QTY',
		 'MIN_ORDER_QTY',
		 'MAX_ORDER_QTY',
		 'FIXED_ORDER_QTY',
		 'FIXED_LOT_SIZE_MULTIPLIER',
		 'SR_VENDOR_ID',
		 'SR_VENDOR',
		 'SR_VENDOR_SITE_CODE',
		 'PROCESSING_LEAD_TIME',
		 'ITEM_COST',
		 'ITEM_COST_USD',
		 'OPEN_PO_VALUE_USD',
		 'SAFETY_STOCK_QTY',
		 'SAFETY_STOCK_VALUE',
		 'SAFETY_STOCK_VALUE_USD',
		 'WEEK_1',
		 'CUM_WEEK_2',
		 'CUM_WEEK_4',
		 'CUM_WEEK_8',
		 'CUM_WEEK_13',
		 'TOTAL_GR_26_WEEKS',
		 'INVENTORY_QUANTITY',
		 'INVENTORY_VALUE',
		 'OPEN_PO_QTY',
		 'OPEN_PO_VALUE',
		 'TOTAL_QUANTITY',
		 'EXTENDED_VALUE',
		 'ON_HAND_DAYS_OF_SUPPLY',
		 'ON_ORDER_DAYS_OF_SUPPLY',
		 'WIP_DAYS_OF_SUPPLY',
		 'TOTAL_DAYS_OF_SUPPLY',
		 'ACTIVE_SUPPLIER_LT',
		 'FIXED_DAYS_SUPPLY',
		 'AVERAGE_DAILY_DEMAND',
		 'AVG_DAILY_DEMAND_ELSE_USAGE',
		 'OH_EXCESS_QTY_AS_PER_ADD',
		 'OH_EXCESS_VAL_AS_PER_ADD',
		 'OH_EXCESS_QTY_AS_PER_ADDEU',
		 'OH_EXCESS_VAL_AS_PER_ADDADDEU',
		 'SUPP_EXCESS_QTY_AS_PER_ADD',
		 'SUPP_EXCESS_VAL_AS_PER_ADD',
		 'SUPP_EXCESS_QTY_AS_PER_ADDEU',
		 'SUPP_EXCESS_VAL_AS_PER_ADDEU',
		 'OH_EXCESS_DOS',
		 'SUPP_EXCESS_DOS'
 ];
 public $initial_search = [
		 'BUYER',
		 'ITEM_NUMBER',
		 'SR_VENDOR'
 ];
 public $column = [
		 'DATE_RUN',
		 'PERIOD_NAME',
		 'ORGANIZATION_CODE',
		 'ITEM_NUMBER',
		 'ITEM_TYPE',
		 'CURRENT_ABC_CLASS',
		 'PLANNER',
		 'BUYER',
		 'SR_VENDOR',
		 'ITEM_COST',
		 'WEEK_1',
		 'CUM_WEEK_2',
		 'CUM_WEEK_4',
		 'CUM_WEEK_8',
		 'CUM_WEEK_13',
		 'TOTAL_GR_26_WEEKS',
		 'INVENTORY_QUANTITY',
		 'INVENTORY_VALUE',
		 'OPEN_PO_QTY',
		 'OPEN_PO_VALUE',
		 'TOTAL_QUANTITY',
		 'EXTENDED_VALUE',
		 'AVERAGE_DAILY_DEMAND',
		 'AVG_DAILY_DEMAND_ELSE_USAGE',
		 'OH_EXCESS_QTY_AS_PER_ADD',
		 'OH_EXCESS_VAL_AS_PER_ADD',
		 'OH_EXCESS_QTY_AS_PER_ADDEU',
		 'OH_EXCESS_VAL_AS_PER_ADDADDEU',
		 'SUPP_EXCESS_QTY_AS_PER_ADD',
		 'SUPP_EXCESS_VAL_AS_PER_ADD',
		 'SUPP_EXCESS_QTY_AS_PER_ADDEU',
		 'SUPP_EXCESS_VAL_AS_PER_ADDEU',
		 'OH_EXCESS_DOS',
		 'SUPP_EXCESS_DOS',
 ];
 public $search_functions = [
		 'Organization' => 'search_org_name',
		 'Planner Code' => 'search_planner',
		 'ABC Class' => 'search_abc_class',
 ];
 public $DATE_RUN;
 public $PERIOD_NAME;
 public $FISCAL_WEEK_ID;
 public $PLANNING_METHOD;
 public $ORGANIZATION_ID;
 public $ORGANIZATION_CODE;
 public $INVENTORY_ITEM_ID;
 public $ITEM_NUMBER;
 public $ITEM_DESCRIPTION;
 public $UOM;
 public $ITEM_TYPE;
 public $CURRENT_ABC_CLASS;
 public $ORG_TBU;
 public $ORG_FAMILY;
 public $ORG_LINE;
 public $SOURCING_COMMODITY;
 public $PLANNER;
 public $BUYER;
 public $INVENTORY_PLANNING_METHOD;
 public $MIN_MAX_MIN_QTY;
 public $MIN_MAX_MAX_QTY;
 public $MIN_ORDER_QTY;
 public $MAX_ORDER_QTY;
 public $FIXED_ORDER_QTY;
 public $FIXED_LOT_SIZE_MULTIPLIER;
 public $SR_VENDOR_ID;
 public $SR_VENDOR;
 public $SR_VENDOR_SITE_CODE;
 public $PROCESSING_LEAD_TIME;
 public $ITEM_COST;
 public $ITEM_COST_USD;
 public $OPEN_PO_VALUE_USD;
 public $SAFETY_STOCK_QTY;
 public $SAFETY_STOCK_VALUE;
 public $SAFETY_STOCK_VALUE_USD;
 public $WEEK_1;
 public $CUM_WEEK_2;
 public $CUM_WEEK_4;
 public $CUM_WEEK_8;
 public $CUM_WEEK_13;
 public $TOTAL_GR_26_WEEKS;
 public $INVENTORY_QUANTITY;
 public $INVENTORY_VALUE;
 public $OPEN_PO_QTY;
 public $OPEN_PO_VALUE;
 public $TOTAL_QUANTITY;
 public $EXTENDED_VALUE;
 public $ON_HAND_DAYS_OF_SUPPLY;
 public $ON_ORDER_DAYS_OF_SUPPLY;
 public $WIP_DAYS_OF_SUPPLY;
 public $TOTAL_DAYS_OF_SUPPLY;
 public $ACTIVE_SUPPLIER_LT;
 public $FIXED_DAYS_SUPPLY;
 public $AVERAGE_DAILY_DEMAND;
 public $AVG_DAILY_DEMAND_ELSE_USAGE;
 public $OH_EXCESS_QTY_AS_PER_ADD;
 public $OH_EXCESS_VAL_AS_PER_ADD;
 public $OH_EXCESS_QTY_AS_PER_ADDEU;
 public $OH_EXCESS_VAL_AS_PER_ADDADDEU;
 public $SUPP_EXCESS_QTY_AS_PER_ADD;
 public $SUPP_EXCESS_VAL_AS_PER_ADD;
 public $SUPP_EXCESS_QTY_AS_PER_ADDEU;
 public $SUPP_EXCESS_VAL_AS_PER_ADDEU;
 public $OH_EXCESS_DOS;
 public $SUPP_EXCESS_DOS;

 public function __set($name, $value) {
	switch ($value) {
	 case $value:


		break;

	 default:
		$this->$name = $value;
		break;
	}
 }

 public function search_records($parameters = '') {
	$pageno = !empty($parameters['pageno']) ? $parameters['pageno'] : 1;
	$page_size = !empty($parameters['per_page']) ? $parameters['per_page'] : 10;
	$whereClause = $_GET['whereClause'];
	$search_order_by = !(empty($_GET['search_order_by'])) ? $_GET['search_order_by'] : '';
	$search_asc_desc = !(empty($_GET['search_asc_desc'])) ? $_GET['search_asc_desc'] : '';

	if ((!empty($search_order_by)) && (!empty($search_asc_desc))) {
	 if (is_array($search_order_by)) {
		$order_by = ' ORDER BY ';
		foreach ($search_order_by as $key_oby => $value_oby) {
		 if (empty($search_asc_desc[$key_oby])) {
			$search_asc_desc[$key_oby] = ' DESC ';
		 }
		 $order_by .= $value_oby . ' ' . $search_asc_desc[$key_oby] . ' ,';
		}
		$order_by_i = rtrim($order_by, ',');
	 } else {
		$order_by_i = ' ORDER BY ' . $search_order_by . ' ' . $search_asc_desc;
	 }
	}

	$sql = " 
	 SELECT * FROM (
	   SELECT tbl.*, rownum r 
		     FROM (
					SELECT DATE_RUN, PERIOD_NAME, FISCAL_WEEK_ID, PLANNING_METHOD,ORGANIZATION_ID, ORGANIZATION_CODE, INVENTORY_ITEM_ID,
					ITEM_NUMBER, ITEM_DESCRIPTION,UOM, ITEM_TYPE, CURRENT_ABC_CLASS,ORG_TBU, ORG_FAMILY, ORG_LINE, SOURCING_COMMODITY, PLANNER,
					BUYER, INVENTORY_PLANNING_METHOD,MIN_MAX_MIN_QTY, MIN_MAX_MAX_QTY, MIN_ORDER_QTY, MAX_ORDER_QTY, FIXED_ORDER_QTY, 
					FIXED_LOT_SIZE_MULTIPLIER, SR_VENDOR_ID, SR_VENDOR, SR_VENDOR_SITE_CODE, PROCESSING_LEAD_TIME, ITEM_COST, ITEM_COST_USD,
					 OPEN_PO_VALUE_USD, SAFETY_STOCK_QTY, SAFETY_STOCK_VALUE,SAFETY_STOCK_VALUE_USD,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) WEEK_1,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) as CUM_WEEK_2,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) + nvl(WEEKLY_GROSS_REQS_WEEK_3,0) + nvl(WEEKLY_GROSS_REQS_WEEK_4,0) as 
					CUM_WEEK_4,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) + nvl(WEEKLY_GROSS_REQS_WEEK_3,0) + nvl(WEEKLY_GROSS_REQS_WEEK_4,0) +
					nvl(WEEKLY_GROSS_REQS_WEEK_5,0) + nvl(WEEKLY_GROSS_REQS_WEEK_6,0) + nvl(WEEKLY_GROSS_REQS_WEEK_7,0) + nvl(WEEKLY_GROSS_REQS_WEEK_8,0) as 
					CUM_WEEK_8,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) + nvl(WEEKLY_GROSS_REQS_WEEK_3,0) + nvl(WEEKLY_GROSS_REQS_WEEK_4,0) +
					nvl(WEEKLY_GROSS_REQS_WEEK_5,0) + nvl(WEEKLY_GROSS_REQS_WEEK_6,0) + nvl(WEEKLY_GROSS_REQS_WEEK_7,0) + nvl(WEEKLY_GROSS_REQS_WEEK_8,0)  + 
					nvl(WEEKLY_GROSS_REQS_WEEK_9,0) + nvl(WEEKLY_GROSS_REQS_WEEK_10,0) + nvl(WEEKLY_GROSS_REQS_WEEK_11,0) + nvl(WEEKLY_GROSS_REQS_WEEK_12,0)
					 + nvl(WEEKLY_GROSS_REQS_WEEK_13,0)
					as CUM_WEEK_13, TOTAL_GR_26_WEEKS,
					INVENTORY_QUANTITY,INVENTORY_VALUE,OPEN_PO_QTY, OPEN_PO_VALUE, TOTAL_QUANTITY, EXTENDED_VALUE,
					ON_HAND_DAYS_OF_SUPPLY, ON_ORDER_DAYS_OF_SUPPLY, WIP_DAYS_OF_SUPPLY, TOTAL_DAYS_OF_SUPPLY, ACTIVE_SUPPLIER_LT, FIXED_DAYS_SUPPLY,
					AVERAGE_DAILY_DEMAND, AVG_DAILY_DEMAND_ELSE_USAGE,
					(nvl(INVENTORY_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) ) as OH_Excess_qty_as_Per_ADD, 
					(nvl(INVENTORY_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) )*ITEM_COST as OH_Excess_val_as_Per_ADD,
					(nvl(INVENTORY_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) ) as OH_Excess_qty_as_Per_ADDEU, 
					(nvl(INVENTORY_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) )*ITEM_COST as OH_Excess_val_as_Per_ADDADDEU,
					(nvl(TOTAL_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) ) as SUPP_Excess_qty_as_Per_ADD, 
					(nvl(TOTAL_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) )*ITEM_COST as SUPP_Excess_val_as_Per_ADD,
					(nvl(TOTAL_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) ) as SUPP_Excess_qty_as_Per_ADDEU, 
					(nvl(TOTAL_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) )*ITEM_COST as SUPP_Excess_val_as_Per_ADDEU,
					(nvl(ON_HAND_DAYS_OF_SUPPLY,0) - (nvl(FIXED_DAYS_SUPPLY, 0) + 1) ) as OH_Excess_Dos, 
					(nvl(TOTAL_DAYS_OF_SUPPLY,0) - (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1) ) as SUPP_Excess_Dos 

					FROM XXFACTS.XX_INVASCP_FACT 
					WHERE 
					DATE_RUN IN (
					SELECT MAX(DATE_RUN) FROM XXFACTS.XX_INVASCP_FACT 
					)
					 
";
	if (!empty($whereClause)) {
	 $sql .= "	AND $whereClause";
	}
	$sql .= " $order_by_i
						 ) tbl
					 WHERE rownum < (($pageno * $page_size) + 1 )
	)
	WHERE r >= ((($pageno-1) * $page_size) + 1)
";

	$result = $this->findBy_sql($sql);
	return !empty($result) ? $result : false;
 }

 public function search_counts($sql = '') {
	$whereClause = $_GET['whereClause'];

	$sql = " 
	 SELECT * 
		     FROM (
          SELECT DATE_RUN, PERIOD_NAME, FISCAL_WEEK_ID, PLANNING_METHOD,ORGANIZATION_ID, ORGANIZATION_CODE, INVENTORY_ITEM_ID,
					ITEM_NUMBER, ITEM_DESCRIPTION,UOM, ITEM_TYPE, CURRENT_ABC_CLASS,ORG_TBU, ORG_FAMILY, ORG_LINE, SOURCING_COMMODITY, PLANNER,
					BUYER, INVENTORY_PLANNING_METHOD,MIN_MAX_MIN_QTY, MIN_MAX_MAX_QTY, MIN_ORDER_QTY, MAX_ORDER_QTY, FIXED_ORDER_QTY, 
					FIXED_LOT_SIZE_MULTIPLIER, SR_VENDOR_ID, SR_VENDOR, SR_VENDOR_SITE_CODE, PROCESSING_LEAD_TIME, ITEM_COST, ITEM_COST_USD,
					 OPEN_PO_VALUE_USD, SAFETY_STOCK_QTY, SAFETY_STOCK_VALUE,SAFETY_STOCK_VALUE_USD,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) WEEK_1,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) as CUM_WEEK_2,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) + nvl(WEEKLY_GROSS_REQS_WEEK_3,0) + nvl(WEEKLY_GROSS_REQS_WEEK_4,0) as 
					CUM_WEEK_4,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) + nvl(WEEKLY_GROSS_REQS_WEEK_3,0) + nvl(WEEKLY_GROSS_REQS_WEEK_4,0) +
					nvl(WEEKLY_GROSS_REQS_WEEK_5,0) + nvl(WEEKLY_GROSS_REQS_WEEK_6,0) + nvl(WEEKLY_GROSS_REQS_WEEK_7,0) + nvl(WEEKLY_GROSS_REQS_WEEK_8,0) as 
					CUM_WEEK_8,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) + nvl(WEEKLY_GROSS_REQS_WEEK_3,0) + nvl(WEEKLY_GROSS_REQS_WEEK_4,0) +
					nvl(WEEKLY_GROSS_REQS_WEEK_5,0) + nvl(WEEKLY_GROSS_REQS_WEEK_6,0) + nvl(WEEKLY_GROSS_REQS_WEEK_7,0) + nvl(WEEKLY_GROSS_REQS_WEEK_8,0)  + 
					nvl(WEEKLY_GROSS_REQS_WEEK_9,0) + nvl(WEEKLY_GROSS_REQS_WEEK_10,0) + nvl(WEEKLY_GROSS_REQS_WEEK_11,0) + nvl(WEEKLY_GROSS_REQS_WEEK_12,0)
					 + nvl(WEEKLY_GROSS_REQS_WEEK_13,0)
					as CUM_WEEK_13, TOTAL_GR_26_WEEKS,
					INVENTORY_QUANTITY,INVENTORY_VALUE,OPEN_PO_QTY, OPEN_PO_VALUE, TOTAL_QUANTITY, EXTENDED_VALUE,
					ON_HAND_DAYS_OF_SUPPLY, ON_ORDER_DAYS_OF_SUPPLY, WIP_DAYS_OF_SUPPLY, TOTAL_DAYS_OF_SUPPLY, ACTIVE_SUPPLIER_LT, FIXED_DAYS_SUPPLY,
					AVERAGE_DAILY_DEMAND, AVG_DAILY_DEMAND_ELSE_USAGE,
					(nvl(INVENTORY_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) ) as OH_Excess_qty_as_Per_ADD, 
					(nvl(INVENTORY_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) )*ITEM_COST as OH_Excess_val_as_Per_ADD,
					(nvl(INVENTORY_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) ) as OH_Excess_qty_as_Per_ADDEU, 
					(nvl(INVENTORY_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) )*ITEM_COST as OH_Excess_val_as_Per_ADDADDEU,
					(nvl(TOTAL_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) ) as SUPP_Excess_qty_as_Per_ADD, 
					(nvl(TOTAL_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) )*ITEM_COST as SUPP_Excess_val_as_Per_ADD,
					(nvl(TOTAL_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) ) as SUPP_Excess_qty_as_Per_ADDEU, 
					(nvl(TOTAL_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) )*ITEM_COST as SUPP_Excess_val_as_Per_ADDEU,
					(nvl(ON_HAND_DAYS_OF_SUPPLY,0) - (nvl(FIXED_DAYS_SUPPLY, 0) + 1) ) as OH_Excess_Dos, 
					(nvl(TOTAL_DAYS_OF_SUPPLY,0) - (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1) ) as SUPP_Excess_Dos 

					FROM XXFACTS.XX_INVASCP_FACT 
					WHERE 
					DATE_RUN IN (
					SELECT MAX(DATE_RUN) FROM XXFACTS.XX_INVASCP_FACT 
					)



";
	if (!empty($whereClause)) {
	 $sql .= "	AND $whereClause";
	}
	$sql .= ")";
	$result = $this->findBySql($sql);
	return !empty($result) ? count($result) : false;
 }

 public function search_download() {
	$whereClause = $_GET['whereClause'];

	$sql = " 
	 SELECT * 
		     FROM (
          SELECT DATE_RUN, PERIOD_NAME, FISCAL_WEEK_ID, PLANNING_METHOD,ORGANIZATION_ID, ORGANIZATION_CODE, INVENTORY_ITEM_ID,
					ITEM_NUMBER, ITEM_DESCRIPTION,UOM, ITEM_TYPE, CURRENT_ABC_CLASS,ORG_TBU, ORG_FAMILY, ORG_LINE, SOURCING_COMMODITY, PLANNER,
					BUYER, INVENTORY_PLANNING_METHOD,MIN_MAX_MIN_QTY, MIN_MAX_MAX_QTY, MIN_ORDER_QTY, MAX_ORDER_QTY, FIXED_ORDER_QTY, 
					FIXED_LOT_SIZE_MULTIPLIER, SR_VENDOR_ID, SR_VENDOR, SR_VENDOR_SITE_CODE, PROCESSING_LEAD_TIME, ITEM_COST, ITEM_COST_USD,
					 OPEN_PO_VALUE_USD, SAFETY_STOCK_QTY, SAFETY_STOCK_VALUE,SAFETY_STOCK_VALUE_USD,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) WEEK_1,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) as CUM_WEEK_2,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) + nvl(WEEKLY_GROSS_REQS_WEEK_3,0) + nvl(WEEKLY_GROSS_REQS_WEEK_4,0) as 
					CUM_WEEK_4,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) + nvl(WEEKLY_GROSS_REQS_WEEK_3,0) + nvl(WEEKLY_GROSS_REQS_WEEK_4,0) +
					nvl(WEEKLY_GROSS_REQS_WEEK_5,0) + nvl(WEEKLY_GROSS_REQS_WEEK_6,0) + nvl(WEEKLY_GROSS_REQS_WEEK_7,0) + nvl(WEEKLY_GROSS_REQS_WEEK_8,0) as 
					CUM_WEEK_8,
					nvl(WEEKLY_GROSS_REQS_WEEK_1,0) + nvl(WEEKLY_GROSS_REQS_WEEK_2,0) + nvl(WEEKLY_GROSS_REQS_WEEK_3,0) + nvl(WEEKLY_GROSS_REQS_WEEK_4,0) +
					nvl(WEEKLY_GROSS_REQS_WEEK_5,0) + nvl(WEEKLY_GROSS_REQS_WEEK_6,0) + nvl(WEEKLY_GROSS_REQS_WEEK_7,0) + nvl(WEEKLY_GROSS_REQS_WEEK_8,0)  + 
					nvl(WEEKLY_GROSS_REQS_WEEK_9,0) + nvl(WEEKLY_GROSS_REQS_WEEK_10,0) + nvl(WEEKLY_GROSS_REQS_WEEK_11,0) + nvl(WEEKLY_GROSS_REQS_WEEK_12,0)
					 + nvl(WEEKLY_GROSS_REQS_WEEK_13,0)
					as CUM_WEEK_13, TOTAL_GR_26_WEEKS,
					INVENTORY_QUANTITY,INVENTORY_VALUE,OPEN_PO_QTY, OPEN_PO_VALUE, TOTAL_QUANTITY, EXTENDED_VALUE,
					ON_HAND_DAYS_OF_SUPPLY, ON_ORDER_DAYS_OF_SUPPLY, WIP_DAYS_OF_SUPPLY, TOTAL_DAYS_OF_SUPPLY, ACTIVE_SUPPLIER_LT, FIXED_DAYS_SUPPLY,
					AVERAGE_DAILY_DEMAND, AVG_DAILY_DEMAND_ELSE_USAGE,
					(nvl(INVENTORY_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) ) as OH_Excess_qty_as_Per_ADD, 
					(nvl(INVENTORY_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) )*ITEM_COST as OH_Excess_val_as_Per_ADD,
					(nvl(INVENTORY_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) ) as OH_Excess_qty_as_Per_ADDEU, 
					(nvl(INVENTORY_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(FIXED_DAYS_SUPPLY, 0) + 1)) )*ITEM_COST as OH_Excess_val_as_Per_ADDADDEU,
					(nvl(TOTAL_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) ) as SUPP_Excess_qty_as_Per_ADD, 
					(nvl(TOTAL_QUANTITY,0) - (AVERAGE_DAILY_DEMAND * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) )*ITEM_COST as SUPP_Excess_val_as_Per_ADD,
					(nvl(TOTAL_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) ) as SUPP_Excess_qty_as_Per_ADDEU, 
					(nvl(TOTAL_QUANTITY,0) - (AVG_DAILY_DEMAND_ELSE_USAGE * (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1)) )*ITEM_COST as SUPP_Excess_val_as_Per_ADDEU,
					(nvl(ON_HAND_DAYS_OF_SUPPLY,0) - (nvl(FIXED_DAYS_SUPPLY, 0) + 1) ) as OH_Excess_Dos, 
					(nvl(TOTAL_DAYS_OF_SUPPLY,0) - (nvl(ACTIVE_SUPPLIER_LT, PROCESSING_LEAD_TIME) + 1) ) as SUPP_Excess_Dos 

					FROM XXFACTS.XX_INVASCP_FACT 
					WHERE 
					DATE_RUN IN (
					SELECT MAX(DATE_RUN) FROM XXFACTS.XX_INVASCP_FACT 
					)



";
	if (!empty($whereClause)) {
	 $sql .= "	AND $whereClause";
	}
	$sql .= ")";

	$result = $this->findBySql($sql);
	return !empty($result) ? $result : false;
 }

}

//end of excess_supply class
?>