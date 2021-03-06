﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Requests Amazon API Gateway to get information about a <a>Stage</a>
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetStageRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetStageRequest : public APIGatewayRequest
  {
  public:
    GetStageRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to get information about.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to get information about.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to get information about.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to get information about.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to get information about.</p>
     */
    inline GetStageRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to get information about.</p>
     */
    inline GetStageRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to get information about.</p>
     */
    inline GetStageRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the <a>Stage</a> resource to get information about.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the <a>Stage</a> resource to get information about.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the <a>Stage</a> resource to get information about.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the <a>Stage</a> resource to get information about.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the <a>Stage</a> resource to get information about.</p>
     */
    inline GetStageRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the <a>Stage</a> resource to get information about.</p>
     */
    inline GetStageRequest& WithStageName(Aws::String&& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the <a>Stage</a> resource to get information about.</p>
     */
    inline GetStageRequest& WithStageName(const char* value) { SetStageName(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
